#include <stdio.h>
#include <string.h>
#include "libft.h"  // Supondo que ft_substr esteja declarada em libft.h

int main(void) {
    char *result;

    // Caso de teste 1: Índice start dentro da string e len menor que o restante
    result = ft_substr("Hello, world!", 7, 5);
    printf("Test 1: ft_substr(\"Hello, world!\", 7, 5)\n");
    printf("Expected: 'world'\n");
    printf("Got: '%s'\n\n", result);
    free(result);

    // Caso de teste 2: Índice start maior que o comprimento da string
    result = ft_substr("Hello", 10, 5);
    printf("Test 2: ft_substr(\"Hello\", 10, 5)\n");
    printf("Expected: '' (empty string)\n");
    printf("Got: '%s'\n\n", result);
    free(result);

    // Caso de teste 3: len maior que a parte restante da string
    result = ft_substr("Hello, world!", 7, 20);
    printf("Test 3: ft_substr(\"Hello, world!\", 7, 20)\n");
    printf("Expected: 'world!'\n");
    printf("Got: '%s'\n\n", result);
    free(result);

    // Caso de teste 4: String vazia
    result = ft_substr("", 0, 10);
    printf("Test 4: ft_substr(\"\", 0, 10)\n");
    printf("Expected: '' (empty string)\n");
    printf("Got: '%s'\n\n", result);
    free(result);

    // Caso de teste 5: len zero
    result = ft_substr("Hello, world!", 5, 0);
    printf("Test 5: ft_substr(\"Hello, world!\", 5, 0)\n");
    printf("Expected: '' (empty string)\n");
    printf("Got: '%s'\n\n", result);
    free(result);

    return 0;
}