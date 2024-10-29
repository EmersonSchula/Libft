#include <stdio.h>
#include <string.h>  // Para funções de impressão e comparação
#include "libft.h"   // Supondo que ft_strnstr esteja declarada em libft.h

int main(void) {
    const char *haystack = "Hello, World!";
    const char *needle1 = "World";
    const char *needle2 = "world";
    const char *needle3 = "";
    const char *needle4 = "Hello";
    size_t len = 13;

    // Teste 1: Encontrar uma substring presente
    char *result = ft_strnstr(haystack, needle1, len);
    printf("Test 1: ft_strnstr with needle = \"%s\"\n", needle1);
    printf("Expected: \"%s\"\n", "World!");
    printf("Got: \"%s\"\n\n", result);

    // Teste 2: Não encontrar a substring devido à diferença de case
    result = ft_strnstr(haystack, needle2, len);
    printf("Test 2: ft_strnstr with needle = \"%s\"\n", needle2);
    printf("Expected: NULL\n");
    printf("Got: %s\n\n", result ? result : "NULL");

    // Teste 3: Substring vazia (deve retornar haystack)
    result = ft_strnstr(haystack, needle3, len);
    printf("Test 3: ft_strnstr with needle = \"%s\" (empty string)\n", needle3);
    printf("Expected: \"%s\"\n", haystack);
    printf("Got: \"%s\"\n\n", result);

    // Teste 4: Substring no início de haystack
    result = ft_strnstr(haystack, needle4, len);
    printf("Test 4: ft_strnstr with needle = \"%s\"\n", needle4);
    printf("Expected: \"%s\"\n", haystack);
    printf("Got: \"%s\"\n\n", result);

    // Teste 5: Limitar a busca para que a substring não seja encontrada
    result = ft_strnstr(haystack, needle1, 5);
    printf("Test 5: ft_strnstr with needle = \"%s\" and len = 5\n", needle1);
    printf("Expected: NULL\n");
    printf("Got: %s\n\n", result ? result : "NULL");

    return 0;
}
