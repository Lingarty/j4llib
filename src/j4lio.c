#include "j4lio.h"
#include "j4lstring.h"
#include <unistd.h>

int j4l_printf(const char* format, ...) {
    return write(STDOUT_FILENO, format, j4l_strlen(format));
}