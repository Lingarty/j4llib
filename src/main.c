#include "j4lstring.h"

int main() {
    char hello[] = "hello";
    if(j4l_strlen(hello) != 5) {
        return 1;
    }
    return 0;
}