#include <stdio.h>
#include <string.h>  // Para a função padrão strrchr
#include "libft.h"   // Supondo que ft_strrchr esteja declarada em libft.h

int main(void) {
    const char *str = "Hello, World!";
    char test_chars[] = {'H', 'o', 'l', ' ', 'W', '!', 'x', '\0'};
    int num_tests = sizeof(test_chars) / sizeof(test_chars[0]);

    // Itera sobre cada caractere do array e testa com strrchr e ft_strrchr
    for (int i = 0; i < num_tests; i++) {
        char c = test_chars[i];
        char *expected = strrchr(str, c);  // Função padrão
        char *result = ft_strrchr(str, c);  // Sua função

        printf("Testing ft_strrchr with '%c'\n", c);
        if (expected) {
            printf("Expected (strrchr): '%c' at %ld\n", *expected, expected - str);
        } else {
            printf("Expected (strrchr): NULL\n");
        }
        if (result) {
            printf("Got (ft_strrchr): '%c' at %ld\n\n", *result, result - str);
        } else {
            printf("Got (ft_strrchr): NULL\n\n");
        }
    }

    return 0;
}
