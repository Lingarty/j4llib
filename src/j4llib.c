#include "j4llib.h"
#include <unistd.h>

void *j4l_malloc(j4l_size_t size){
    return sbrk(size);
}

void j4l_free(void *ptr){}
