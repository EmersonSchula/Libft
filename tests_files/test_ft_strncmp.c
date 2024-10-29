#include <stdio.h>
#include <string.h>  // Para a função padrão strncmp
#include "libft.h"   // Supondo que ft_strncmp esteja declarada em libft.h

int main(void) {
    const char *s1 = "Hello, World!";
    const char *s2 = "Hello, there!";
    size_t n = 6;

    // Teste 1: Comparar os primeiros 'n' caracteres
    int result1 = strncmp(s1, s2, n);
    int result2 = ft_strncmp(s1, s2, n);
    printf("Test 1: strncmp vs ft_strncmp with n = %zu\n", n);
    printf("Expected: %d\n", result1);
    printf("Got: %d\n\n", result2);

    // Teste 2: Comparar as strings inteiras
    result1 = strncmp(s1, s2, 13);
    result2 = ft_strncmp(s1, s2, 13);
    printf("Test 2: strncmp vs ft_strncmp with n = 13\n");
    printf("Expected: %d\n", result1);
    printf("Got: %d\n\n", result2);

    // Teste 3: Comparar strings iguais
    const char *s3 = "Hello, World!";
    result1 = strncmp(s1, s3, 13);
    result2 = ft_strncmp(s1, s3, 13);
    printf("Test 3: strncmp vs ft_strncmp with identical strings\n");
    printf("Expected: %d\n", result1);
    printf("Got: %d\n\n", result2);

    // Teste 4: Comparar com n = 0
    result1 = strncmp(s1, s2, 0);
    result2 = ft_strncmp(s1, s2, 0);
    printf("Test 4: strncmp vs ft_strncmp with n = 0\n");
    printf("Expected: %d\n", result1);
    printf("Got: %d\n\n", result2);

    return 0;
}
