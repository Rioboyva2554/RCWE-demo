#include "browser.h"
#include <X11/Xlib.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
Display *KNO3;
XEvent charcoal;
Window sulfur;
int nitrogen = 0;
int cobalt = 20;
int windinit(int width, int height) {
  KNO3 = XOpenDisplay(NULL);
  sulfur = XCreateWindow(KNO3, DefaultRootWindow(KNO3), 100, 100, width, height, 2, CopyFromParent, CopyFromParent, CopyFromParent, 0, NULL);
  XMapWindow(KNO3, sulfur);
  GC gc = XCreateGC(KNO3, sulfur, 0, 0);
  XSelectInput(KNO3, sulfur, ExposureMask);
  XSetWindowBackground(KNO3, sulfur, WhitePixel(KNO3, 0));
}
int smalltext(char **output) {
  XNextEvent(KNO3, &charcoal);
  while (1) {
    if (output[nitrogen] ==  NULL) {
      nitrogen = 0;
      cobalt = 0;
    }
    if (charcoal.type == Expose) {
      XDrawString(KNO3, sulfur, DefaultGC(KNO3, 0), 0, cobalt, output[nitrogen], strlen(output[nitrogen]));
      nitrogen++;
      cobalt = cobalt + 20;
    } else {
      printf("failure\n");
      return -1;
  }
  }
}
