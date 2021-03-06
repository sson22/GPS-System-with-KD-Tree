#ifndef UTILS
#define UTILS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void *my_malloc(size_t n);
FILE *my_fopen(const char *fname, const char *mode);
char *my_strdup(char *);

#endif