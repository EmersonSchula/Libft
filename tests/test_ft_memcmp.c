#include <stdio.h>
#include <string.h>  // Para a função padrão memcmp
#include "libft.h"   // Supondo que ft_memcmp esteja declarada em libft.h

int main(void) {
    const char str1[] = "Hello, World!";
    const char str2[] = "Hello, world!";
    const char str3[] = "Hello, World!";
    size_t n = 13;

    // Teste 1: Comparar strings iguais
    int result1 = memcmp(str1, str3, n);
    int result2 = ft_memcmp(str1, str3, n);
    printf("Test 1: memcmp vs ft_memcmp with identical strings\n");
    printf("Expected: %d\n", result1);
    printf("Got: %d\n\n", result2);

    // Teste 2: Comparar strings diferentes
    result1 = memcmp(str1, str2, n);
    result2 = ft_memcmp(str1, str2, n);
    printf("Test 2: memcmp vs ft_memcmp with different strings\n");
    printf("Expected: %d\n", result1);
    printf("Got: %d\n\n", result2);

    // Teste 3: Comparar com n = 5 (comparando apenas "Hello")
    result1 = memcmp(str1, str2, 5);
    result2 = ft_memcmp(str1, str2, 5);
    printf("Test 3: memcmp vs ft_memcmp with n = 5\n");
    printf("Expected: %d\n", result1);
    printf("Got: %d\n\n", result2);

    // Teste 4: Comparar com n = 0 (deve retornar 0)
    result1 = memcmp(str1, str2, 0);
    result2 = ft_memcmp(str1, str2, 0);
    printf("Test 4: memcmp vs ft_memcmp with n = 0\n");
    printf("Expected: %d\n", result1);
    printf("Got: %d\n\n", result2);

    return 0;
}
