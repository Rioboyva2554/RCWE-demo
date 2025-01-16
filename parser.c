#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "browser.h"
#include <errno.h>
#include <unistd.h>
int bogus = 1;
char **jelly = NULL;
int check(char *htmlreds, char *htmlstr, int gidfoo, int imporlent, char *this, int again, FILE *hrfile, char *benjamin, int htmlsize, int micus) {
      if (strcmp(htmlreds, "<html>") == 0) {
    htmlstr[0] = 0;
    fgets(htmlstr, 100, hrfile);
      } else if (strcmp(htmlreds, "<!DOCTYPE html>") == 0) {
	      htmlstr[0] = 0;
	      fgets(htmlstr, 100, hrfile);
      } else if (strcmp(htmlreds, "<body>") == 0) {
    	      htmlstr[0] = 0;
	      fgets(htmlstr, 100, hrfile);
  } else if (strcmp(htmlreds, "</body>") == 0) {
	      	      htmlstr[0] = 0;
		      fgets(htmlstr, 100, hrfile);
      } else if (strcmp(htmlreds, "<html>") == 0) {
	  	      	      htmlstr[0] = 0;
			      fgets(htmlstr, 100, hrfile);
      } else if (strcmp(htmlreds, "</html>") == 0) {
	  	      	      htmlstr[0] = 0;
			      fgets(htmlstr, 100, hrfile);
      } else if (strcmp(htmlreds, "<p>") == 0) {
	  if (memmove(htmlstr, htmlstr + gidfoo, imporlent - gidfoo) < 0) {
	    perror("memmove1");
	    return -1;
	  }
	  this = strstr(htmlstr, "<");
	  again = this - htmlstr;
	  htmlstr[again] = 0;
	  printf("%s\n", htmlstr);
	  jelly[bogus] = malloc(1000);
	  strcpy(jelly[bogus], htmlstr);
	  bogus++;
	  htmlstr[0] = 0;
	  this[0] = 0;
	  again = 0;
	  fgets(htmlstr, 100, hrfile);
	} else if (strcmp(htmlreds, "<h1>") == 0) {
	  if (memmove(htmlstr, htmlstr + gidfoo, imporlent - gidfoo) < 0) {
	    perror("memmove2");
	    return -2;
	  }
	  this = strstr(htmlstr, "<");
	  again = this - htmlstr;
	  htmlstr[again] = 0;
	  printf("%d\n", bogus);
	  jelly[bogus] = malloc(1000);
	  strcpy(jelly[bogus], htmlstr);
	  bogus++;
	  htmlstr[0] = 0;
	  fgets(htmlstr, 100, hrfile);
	  this[0] = 0;
	  again = 0;
  } else if (strcmp(htmlreds, "<center>") == 0) {
    printf("     ");
    micus = 1000 - gidfoo;
    if (memmove(htmlstr, htmlstr + gidfoo, micus - gidfoo) < 0) {
      perror("memmove3");
      return -3;
    } else {
       benjamin = strstr(htmlstr, ">");
  gidfoo = htmlstr - benjamin;
  imporlent = htmlsize - gidfoo;
  strcpy(htmlreds, htmlstr);
  htmlreds[gidfoo] = 0;
  int blorgus = check(htmlreds, htmlstr, gidfoo, imporlent, this, again, hrfile, benjamin, htmlsize, micus);
  if (blorgus < 0) {
    perror("check");
  } else {
    printf("nay\n");
  }
     htmlstr[0] = 0;
    fgets(htmlstr, 1000, hrfile);
    }
    } else if (strcmp(htmlreds, "<hr>") == 0) {
	  jelly[bogus] = malloc(27);
	  strcpy(jelly[bogus], "__________________________");
	  bogus++;
	  micus = 1000 - gidfoo;
    if (memmove(htmlstr, htmlstr + gidfoo, micus - gidfoo) < 0) {
      perror("memmove4");
      return -4;
    }
       benjamin = strstr(htmlstr, ">");
  gidfoo = benjamin - htmlstr + 1;
  imporlent = htmlsize - gidfoo;
  jelly[bogus] = htmlstr;
  htmlreds[gidfoo] = 0;
  check(htmlreds, htmlstr, gidfoo, imporlent, this, again, hrfile, benjamin, htmlsize, micus);
    htmlstr[0] = 0;
    fgets(htmlstr, 1000, hrfile);
    } else if (htmlreds[0] != '<') {
	  this = strstr(htmlstr, "<");
	  again = this - htmlstr;
	  htmlstr[again] = 0;
	  	  jelly[bogus] = malloc(1000);
	  strcpy(jelly[bogus], htmlstr);
		    bogus++;
      this[0] = 0;
      again = 0;
    } else {
    printf("Unsupported tag: %s\n", htmlreds);
	    htmlstr[0] = 0;
	      fgets(htmlstr, 1000, hrfile);
	  }
    }
int parsehtml(char *buffer, size_t htmlsize) {
  jelly = malloc(1000 * sizeof(char *));
  jelly[0] = malloc(100);
  strcpy(jelly[0], "Thank you tray for inspiring me");
  char *this;
    int again;
    int micus;
      char *benjamin;
  int gidfoo;
  int imporlent;
  char htmlreds[100];
    char htmlstr[1000];
  FILE *hrfile = fopen(".main.html", "r");
   fgets(htmlstr, 1000, hrfile);
  while (1) {
    if (strcmp(htmlstr, "") == 0) {
        jelly[bogus] = malloc(100);
      smalltext(jelly);
      return 0;
    }
  benjamin = strstr(htmlstr, ">");
  gidfoo = benjamin - htmlstr + 1;
  imporlent = htmlsize - gidfoo;
  strcpy(htmlreds, htmlstr);
  htmlreds[gidfoo] = 0;
  if (strcmp(htmlreds, "<html>") == 0) {
    htmlstr[0] = 0;
    fgets(htmlstr, 100, hrfile);
      } else if (strcmp(htmlreds, "<!DOCTYPE html>") == 0) {
	      htmlstr[0] = 0;
	      fgets(htmlstr, 100, hrfile);
      } else if (strcmp(htmlreds, "<body>") == 0) {
    	      htmlstr[0] = 0;
	      fgets(htmlstr, 100, hrfile);
  } else if (strcmp(htmlreds, "</body>") == 0) {
	      	      htmlstr[0] = 0;
		      fgets(htmlstr, 100, hrfile);
      } else if (strcmp(htmlreds, "<html>") == 0) {
	  	      	      htmlstr[0] = 0;
			      fgets(htmlstr, 100, hrfile);
      } else if (strcmp(htmlreds, "</html>") == 0) {
	  	      	      htmlstr[0] = 0;
			      fgets(htmlstr, 100, hrfile);
      } else if (strcmp(htmlreds, "<head>") == 0) {
	  	      	      htmlstr[0] = 0;
			      fgets(htmlstr, 100, hrfile);
      } else if (strcmp(htmlreds, "<p>") == 0) {
	  if (memmove(htmlstr, htmlstr + gidfoo, imporlent - gidfoo) < 0) {
	    return -1;
	  }
	  this = strstr(htmlstr, "<");
	  again = htmlstr - this;
	  htmlstr[again] = 0;
	  printf("%s\n", htmlstr);
	  jelly[bogus] = malloc(1000);
	  strcpy(jelly[bogus], htmlstr);
	  bogus++;
	  htmlstr[0] = 0;
	  this[0] = 0;
	  again = 0;
	  fgets(htmlstr, 100, hrfile);
	} else if (strcmp(htmlreds, "<h1>") == 0) {
	  if (memmove(htmlstr, htmlstr + gidfoo, imporlent - gidfoo) < 0) {
	    return -1;
	  }
	  this = strstr(htmlstr, "<");
	  again = htmlstr - this;
	  htmlstr[again] = 0;
	  printf("%s\n", htmlstr);
	  jelly[bogus] = malloc(1000);
	  strcpy(jelly[bogus], htmlstr);
	  bogus++;
	  htmlstr[0] = 0;
	  fgets(htmlstr, 100, hrfile);
	  this[0] = 0;
	  again = 0;
  } else if (strcmp(htmlreds, "<hr>") == 0) {
    	  jelly[bogus] = malloc(1000);
	  strcpy(jelly[bogus], "__________________________");
	  bogus++;
        micus = 1000 - gidfoo;
    if (memmove(htmlstr, htmlstr + gidfoo, micus - gidfoo) < 0) {
      return -1;
    }
       benjamin = strstr(htmlstr, ">");
  gidfoo = benjamin - htmlstr + 1;
  imporlent = htmlsize - gidfoo;
  strcpy(htmlreds, htmlstr);
  htmlreds[gidfoo] = 0;
  check(htmlreds, htmlstr, gidfoo, imporlent, this, again, hrfile, benjamin, htmlsize, micus);
    htmlstr[0] = 0;
    fgets(htmlstr, 1000, hrfile);
  } else if (strcmp(htmlreds, "<center>") == 0) {
    printf("     ");
     micus = 1000 - gidfoo;
    if (memmove(htmlstr, htmlstr + gidfoo, micus - gidfoo) < 0) {
      return -1;
    } else {
       benjamin = strstr(htmlstr, ">");
  gidfoo = benjamin - htmlstr + 1;
  imporlent = htmlsize - gidfoo;
  strcpy(htmlreds, htmlstr);
  htmlreds[gidfoo] = 0;
   check(htmlreds, htmlstr, gidfoo, imporlent, this, again, hrfile, benjamin, htmlsize, micus);
     htmlstr[0] = 0;
    fgets(htmlstr, 1000, hrfile);
    }
      } else if (htmlreds[0] != '<') {
    	  this = strstr(htmlstr, "<");
	  again = this - htmlstr;
	  htmlstr[again] = 0;
	  jelly[bogus] = malloc(1000);
	  strcpy(jelly[bogus], htmlstr);
	  bogus++;
      htmlstr[0] = 0;
      this[0] = 0;
      again = 0;
    } else {
    printf("Unsupported tag: %s\n", htmlreds);
	    htmlstr[0] = 0;
	      fgets(htmlstr, 1000, hrfile);
	  }
	}
	}
