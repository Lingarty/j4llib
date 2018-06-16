#include "j4lstring.h"

j4l_size_t j4l_strlen(const char* str){
    j4l_size_t len = 0;
    for (; str[len]; len++);
    return len;
}
