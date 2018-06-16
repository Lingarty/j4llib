#include "j4lstring.h"
#include "j4llib.h"
#include "j4lio.h"

struct array {
    int *arr;
    int len;
};

typedef struct array array_t;

array_t *make_array(j4l_size_t len) {
    void *mem = j4l_malloc(sizeof(array_t) + sizeof(int) * len);
    array_t *arr = (array_t *)mem;
    (*arr).len = len;
    (*arr).arr = mem + (sizeof(array_t));
    return arr;
}

int main() {
    char hello[] = "hello";
    if(j4l_strlen(hello) != 5) {
        return 1;
    }

    array_t *arr = make_array(10);
    j4l_printf("Hello world");

    return 0;
}

array_t *insert(array_t *arr, int n) {
    array_t *res = make_array(arr->len + 1);
    int i;
    for(i=0; i<arr->len && arr->arr[i] < n; ++i) {
        res->arr[i] = arr->arr[i];
    }
    res->arr[i++] = n;
    for(; i < res->len; i++) {
        res->arr[i] = arr->arr[i-1];
    }
    return res;
}
