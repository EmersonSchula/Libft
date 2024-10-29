#include <stdio.h>
#include <string.h>  // Para a função padrão strlcpy
#include "libft.h"   // Supondo que ft_strlcpy esteja declarada em libft.h

int main(void) {
    char src[] = "Hello, World!";
    char dest1[20];
    char dest2[20];
    size_t result1, result2;

    // Teste 1: Copiar para um buffer maior que a string
    result1 = ft_strlcpy(dest1, src, sizeof(dest1));
    result2 = ft_strlcpy(dest2, src, sizeof(dest2));
    printf("Test 1: ft_strlcpy vs ft_strlcpy with large buffer\n");
    printf("Expected: '%s', Length: %zu\n", dest1, result1);
    printf("Got:      '%s', Length: %zu\n\n", dest2, result2);

    // Teste 2: Copiar para um buffer menor que a string
    result1 = ft_strlcpy(dest1, src, 5);
    result2 = ft_strlcpy(dest2, src, 5);
    printf("Test 2: ft_strlcpy vs ft_strlcpy with small buffer\n");
    printf("Expected: '%s', Length: %zu\n", dest1, result1);
    printf("Got:      '%s', Length: %zu\n\n", dest2, result2);

    // Teste 3: Copiar para um buffer de tamanho zero
    result1 = ft_strlcpy(dest1, src, 0);
    result2 = ft_strlcpy(dest2, src, 0);
    printf("Test 3: ft_strlcpy vs ft_strlcpy with zero size buffer\n");
    printf("Expected Length: %zu\n", result1);
    printf("Got Length: %zu\n\n", result2);

    return 0;
}
