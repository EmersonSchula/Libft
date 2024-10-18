#include <stdio.h>
#include "libft.h"   // Supondo que ft_strjoin esteja declarada em libft.h

int main(void) {
    char *s1 = "Hello, ";
    char *s2 = "World!";
    char *result = ft_strjoin(s1, s2);

    if (result) {
        printf("Result: \"%s\"\n", result);
        free(result); // Lembra de liberar a memória alocada
    } else {
        printf("ft_strjoin failed to allocate memory.\n");
    }

    // Teste com strings vazias
    s1 = "";
    s2 = "Test";
    result = ft_strjoin(s1, s2);

    if (result) {
        printf("Result with empty s1: \"%s\"\n", result);
        free(result);
    } else {
        printf("ft_strjoin failed to allocate memory with empty s1.\n");
    }

    s1 = "Test";
    s2 = "";
    result = ft_strjoin(s1, s2);

    if (result) {
        printf("Result with empty s2: \"%s\"\n", result);
        free(result);
    } else {
        printf("ft_strjoin failed to allocate memory with empty s2.\n");
    }

    return 0;
}
