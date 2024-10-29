#include <stdio.h>
#include <strings.h>  // Para a função padrão bzero
#include "libft.h"    // Supondo que ft_bzero esteja declarada em libft.h

void print_memory(const char *label, const void *mem, size_t n) {
    const unsigned char *bytes = (const unsigned char *)mem;
    printf("%s: ", label);
    for (size_t i = 0; i < n; i++) {
        printf("%02x ", bytes[i]);
    }
    printf("\n");
}

int main(void) {
    char buffer1[10];
    char buffer2[10];

    // Preenche os buffers com 'A' para que fiquem consistentes antes do teste
    memset(buffer1, 'A', 10);
    memset(buffer2, 'A', 10);

    // Teste 1: Limpar 5 bytes usando bzero e ft_bzero
    bzero(buffer1, 5);
    ft_bzero(buffer2, 5);
    printf("Test 1: bzero vs ft_bzero with 5 bytes\n");
    print_memory("Expected", buffer1, 10);
    print_memory("-----Got", buffer2, 10);
    printf("\n");

    // Teste 2: Limpar todos os 10 bytes
    bzero(buffer1, 10);
    ft_bzero(buffer2, 10);
    printf("Test 2: bzero vs ft_bzero with 10 bytes\n");
    print_memory("Expected", buffer1, 10);
    print_memory("-----Got", buffer2, 10);
    printf("\n");

    return 0;
}
