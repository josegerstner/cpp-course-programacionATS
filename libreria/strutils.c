#include <ctype.h>
#include "strutils.h"

char* strupr(char* s) {
      char* tmp = s;
      for (;*tmp;++tmp) {
            *tmp = toupper((unsigned char) *tmp);
      }
      return s;
}

char* strlwr(char* s) {
      char* tmp = s;
      for (;*tmp;++tmp) {
            *tmp = tolower((unsigned char) *tmp);
      }
      return s;
}

char *strrev(char *str) {
      char *p1, *p2;
      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2) {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}