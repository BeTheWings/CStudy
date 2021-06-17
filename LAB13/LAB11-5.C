#include<stdio.h>

#define MAKE_RGB(red,green,blue) ((red&0xff)|(green&0xff<<8)|(blue&0xff<<16)
##define GET_RED(rgb) (unsigned char) ((rgb)& 0x0000ff)