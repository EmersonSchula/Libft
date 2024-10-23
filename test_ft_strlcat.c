#include <stdio.h>
#include <string.h>  // Para a função padrão strlcat
#include "libft.h"   // Supondo que ft_strlcat esteja declarada em libft.h

int main(void) {
    char src[] = "World!";
    char dest1[20] = "Hello, ";
    char dest2[20] = "Hello, ";
    size_t result1, result2;

    // Teste 1: Concatenar com espaço suficiente no buffer
    result1 = ft_strlcat(dest1, src, sizeof(dest1));
    result2 = ft_strlcat(dest2, src, sizeof(dest2));
    printf("Test 1: ft_strlcat vs ft_strlcat with large buffer\n");
    printf("Expected: '%s', Length: %zu\n", dest1, result1);
    printf("Got:      '%s', Length: %zu\n\n", dest2, result2);

    // Teste 2: Concatenar com buffer pequeno
    strcpy(dest1, "Hello, ");
    strcpy(dest2, "Hello, ");
    result1 = ft_strlcat(dest1, src, 10);
    result2 = ft_strlcat(dest2, src, 10);
    printf("Test 2: ft_strlcat vs ft_strlcat with small buffer\n");
    printf("Expected: '%s', Length: %zu\n", dest1, result1);
    printf("Got:      '%s', Length: %zu\n\n", dest2, result2);

    // Teste 3: Concatenar com buffer zero
    strcpy(dest1, "Hello, ");
    strcpy(dest2, "Hello, ");
    result1 = ft_strlcat(dest1, src, 0);
    result2 = ft_strlcat(dest2, src, 0);
    printf("Test 3: ft_strlcat vs ft_strlcat with zero size buffer\n");
    printf("Expected Length: %zu\n", result1);
    printf("Got Length: %zu\n\n", result2);

    return 0;
}
