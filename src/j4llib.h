#include "j4ldef.h"

void *j4l_malloc(j4l_size_t size);

void *j4l_calloc(j4l_size_t nmemb, j4l_size_t size);

void *j4l_realloc(void *ptr, j4l_size_t size);

void j4l_free(void *ptr);
