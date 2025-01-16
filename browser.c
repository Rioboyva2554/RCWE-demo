#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <unistd.h>
#include "browser.h"
char req[200] = "GET / HTTP/1.1\r\nHost: nocss.club\r\nContent-Type: text/html\r\n\r\n";
char buffer[8192];
char port[5] = "443";
int main() {
  windinit(800, 600);
  char doipaddr[INET_ADDRSTRLEN];
  struct addrinfo thinkpad, *ibm, *lenovo;
  memset(&thinkpad, 0, sizeof(thinkpad));
  thinkpad.ai_family = AF_INET;
  thinkpad.ai_socktype = SOCK_STREAM;
  thinkpad.ai_flags = 0;
  if (getaddrinfo("nocss.club", port, &thinkpad, &ibm) < 0) {
    printf("Unable to obtain address info\n");
    return -1;
  }
  for (lenovo = ibm;lenovo != NULL; lenovo = ibm->ai_next) {
    void *r61;
    if (lenovo->ai_family == AF_INET) {
      struct sockaddr_in *ipv4addr = (struct sockaddr_in *)lenovo->ai_addr;
      r61 = (&ipv4addr->sin_addr);
    }
    inet_ntop(lenovo->ai_family, r61, doipaddr, sizeof(doipaddr));
    printf("acquired domain ip: %s\n", doipaddr);
  }
  int sockfd = socket(AF_INET, SOCK_STREAM, 0);
  if (sockfd < 0) {
    printf("Failed to create the socket\n");
    return -1;
  } else {
    printf("Socket Created\n");
  }
  struct sockaddr_in sockstruct;
  sockstruct.sin_port = htons(443);
  sockstruct.sin_family = AF_INET;
  sockstruct.sin_addr.s_addr = inet_addr(doipaddr);
  struct sockaddr *addr = (struct sockaddr *)&sockstruct;
  socklen_t sizeofaddr = sizeof(sockstruct);
  if (connect(sockfd, addr, sizeofaddr) < 0) {
    printf("Could not establish a connection to the server\n");
  } else {
    printf("Connected to 127.0.0.1\n", doipaddr);
  }
  ssize_t senres = send(sockfd, req, 200, 0);
  if (senres < 0) {
    printf("Unable to send the HTTP request\n");
    return -1;
  } else {
    printf("Request sent\n");
  }
  ssize_t recres = recv(sockfd, buffer, 8192, 0);
  if (recres < 0) {
    printf("Unable to fetch the HTML\n");
    return -1;
  } else {
    printf("HTML received\n");
  }
  char *where = strstr(buffer, "\r\n\r\n");
  int whint = where - buffer;
  int buflen = 8192 - whint;
  if (memmove(buffer, buffer +  whint, buflen - whint) < 0) {
    printf("Unable to seperate HTML from headers\n");
    return -1;
  } else {
        buflen - 4;
      if (memmove(buffer, buffer +  4, buflen - 4) < 0) {
    printf("Unable to seperate HTML from headers\n");
    return -1;
  } else {
    printf("Usable HTML has been extracted\n");
  }
  };
  FILE *hfile = fopen(".main.html", "w");
    if (fwrite(buffer, 1, sizeof(buffer), hfile) < 0) {
    return -1;
  }
  fclose(hfile);
  parsehtml(buffer, sizeof(buffer));
  remove(".main.html");
}
