#include <stdio.h>
#include <string.h>  // Para a função padrão memmove
#include "libft.h"   // Supondo que ft_memmove esteja declarada em libft.h

void print_memory(const char *label, const void *mem, size_t n) {
    const unsigned char *bytes = (const unsigned char *)mem;
    printf("%s: ", label);
    for (size_t i = 0; i < n; i++) {
        printf("%02x ", bytes[i]);
    }
    printf("\n");
}

int main(void) {
    char buffer1[20] = "Hello, World!";
    char buffer2[20] = "Hello, World!";

    // Teste 1: Copiar para uma região sobreposta à frente
    printf("Test 1: memmove vs ft_memmove with overlapping forward\n");
    memmove(buffer1 + 6, buffer1, 6);
    ft_memmove(buffer2 + 6, buffer2, 6);
    print_memory("Expected", buffer1, 20);
    print_memory("-----Got", buffer2, 20);
    printf("\n");

    // Teste 2: Copiar para uma região sobreposta para trás
    strcpy(buffer1, "Hello, World!");
    strcpy(buffer2, "Hello, World!");
    printf("Test 2: memmove vs ft_memmove with overlapping backward\n");
    memmove(buffer1, buffer1 + 7, 6);
    ft_memmove(buffer2, buffer2 + 7, 6);
    print_memory("Expected", buffer1, 20);
    print_memory("-----Got", buffer2, 20);
    printf("\n");

    // Teste 3: Copiar sem sobreposição
    strcpy(buffer1, "Hello, World!");
    strcpy(buffer2, "Hello, World!");
    printf("Test 3: memmove vs ft_memmove without overlap\n");
    memmove(buffer1 + 7, buffer1, 5);
    ft_memmove(buffer2 + 7, buffer2, 5);
    print_memory("Expected", buffer1, 20);
    print_memory("-----Got", buffer2, 20);
    printf("\n");

    return 0;
}
