#include <stdio.h>
#include <string.h>
#include "libft.h"  // Supondo que ft_memset esteja declarada em libft.h

void print_memory(const char *label, const void *mem, size_t n) {
    const unsigned char *bytes = (const unsigned char *)mem;
    printf("%s: ", label);
    for (size_t i = 0; i < n; i++) {
        printf("%02x ", bytes[i]);
    }
    printf("\n");
}

int main(void) {
    char buffer1[20];
    char buffer2[20];

    // Teste 1: Preenchimento com 'A'
    memset(buffer1, 'A', 10);
    ft_memset(buffer2, 'A', 10);
    printf("Test 1: memset vs ft_memset with 'A' and 10 bytes\n");
    print_memory("Expected", buffer1, 20);
    print_memory("-----Got", buffer2, 20);
    printf("\n");

    // Teste 2: Preenchimento com 0
    memset(buffer1, 0, 5);
    ft_memset(buffer2, 0, 5);
    printf("Test 2: memset vs ft_memset with 0 and 5 bytes\n");
    print_memory("Expected", buffer1, 20);
    print_memory("-----Got", buffer2, 20);
    printf("\n");

    // Teste 3: Preenchimento com valor negativo (equivalente a 0xFF)
    memset(buffer1, -1, 15);
    ft_memset(buffer2, -1, 15);
    printf("Test 3: memset vs ft_memset with -1 and 15 bytes\n");
    print_memory("Expected", buffer1, 20);
    print_memory("-----Got", buffer2, 20);
    printf("\n");

    return 0;
}
