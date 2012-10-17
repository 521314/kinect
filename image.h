#ifndef __IMAGE_H__
#define __IMAGE_H__

#include <stdio.h>
#include <stdlib.h>

struct image_t {
  unsigned int width;
  unsigned int height;
  unsigned char *data;
};

typedef struct image_t image;

image *image_create(unsigned int width, unsigned int height);

void image_destroy(image *img);

extern inline void image_set_pixel(image *img, unsigned int x, unsigned int y, unsigned char pixel);

extern inline unsigned char image_get_pixel(image *img, unsigned int x, unsigned int y);

char image_write_png(image *img, FILE *file);

char image_downsample(image *src, image *dst);

#endif
