#include <stdio.h>
#include <string.h>  // Para a função padrão memcpy
#include "libft.h"   // Supondo que ft_memcpy esteja declarada em libft.h

void print_memory(const char *label, const void *mem, size_t n) {
    const unsigned char *bytes = (const unsigned char *)mem;
    printf("%s: ", label);
    for (size_t i = 0; i < n; i++) {
        printf("%c", bytes[i]);
    }
    printf("\n");
}

int main(void) {
    char src[20] = "Hello, World!";
    char dest1[20];
    char dest2[20];

    // Preenche os buffers de destino com 'X' para garantir que estejam limpos
    memset(dest1, 'X', 20);
    memset(dest2, 'X', 20);

    // Teste 1: Copiar 13 bytes usando memcpy e ft_memcpy
    memcpy(dest1, src, 13);
    ft_memcpy(dest2, src, 13);
    printf("Test 1: memcpy vs ft_memcpy with 13 bytes\n");
    print_memory("Expected", dest1, 20);
    print_memory("-----Got", dest2, 20);
    printf("\n");

	// Preenche os buffers de destino com 'X' para garantir que estejam limpos
    memset(dest1, 'X', 20);
    memset(dest2, 'X', 20);

    // Teste 2: Copiar 0 bytes (não deve alterar nada)
    memcpy(dest1, src, 0);
    ft_memcpy(dest2, src, 0);
    printf("Test 2: memcpy vs ft_memcpy with 0 bytes\n");
    print_memory("Expected", dest1, 20);
    print_memory("-----Got", dest2, 20);
    printf("\n");

	// Preenche os buffers de destino com 'X' para garantir que estejam limpos
    memset(dest1, 'X', 20);
    memset(dest2, 'X', 20);

    // Teste 3: Copiar 5 bytes para a mesma área (dest e src são iguais)
    memcpy(dest1, dest1, 5);
    ft_memcpy(dest2, dest2, 5);
    printf("Test 3: memcpy vs ft_memcpy with overlapping same area\n");
    print_memory("Expected", dest1, 20);
    print_memory("-----Got", dest2, 20);
    printf("\n");

    return 0;
}
