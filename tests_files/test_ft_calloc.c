#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void) {
    size_t count = 0;
    size_t size = 4;

    // Teste com count = 0
    void *ptr1 = ft_calloc(count, size);
    printf("Testing ft_calloc with count = %zu, size = %zu\n", count, size);
    if (ptr1) {
        printf("Pointer returned (count = 0) is not NULL, can be passed to free.\n");
    } else {
        printf("Pointer returned (count = 0) is NULL, which is incorrect.\n");
    }

    free(ptr1);

    // Teste com size = 0
    count = 4;
    size = 0;
    void *ptr2 = ft_calloc(count, size);
    printf("Testing ft_calloc with count = %zu, size = %zu\n", count, size);
    if (ptr2) {
        printf("Pointer returned (size = 0) is not NULL, can be passed to free.\n");
    } else {
        printf("Pointer returned (size = 0) is NULL, which is incorrect.\n");
    }

    free(ptr2);

    return 0;
}
