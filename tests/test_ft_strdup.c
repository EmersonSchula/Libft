#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"  // Supondo que ft_strdup esteja declarada em libft.h

int main(void) {
    // Caso de teste 1: String normal
    char *str1 = "Hello, world!";
    char *dup1 = ft_strdup(str1);
    printf("Testing ft_strdup with 'Hello, world!'\n");
    printf("Original: %s\n", str1);
    printf("Duplicate: %s\n", dup1);
    free(dup1);

    // Caso de teste 2: String vazia
    char *str2 = "";
    char *dup2 = ft_strdup(str2);
    printf("\nTesting ft_strdup with an empty string\n");
    printf("Original: '%s'\n", str2);
    printf("Duplicate: '%s'\n", dup2);
    free(dup2);

    // Caso de teste 3: String com caracteres especiais
    char *str3 = "42 São Paulo!";
    char *dup3 = ft_strdup(str3);
    printf("\nTesting ft_strdup with '42 São Paulo!'\n");
    printf("Original: %s\n", str3);
    printf("Duplicate: %s\n", dup3);
    free(dup3);

    return 0;
}
