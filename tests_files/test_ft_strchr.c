#include <stdio.h>
#include <string.h>  // Para a função padrão strchr
#include "libft.h"   // Supondo que ft_strchr esteja declarada em libft.h

int main(void) {
    const char *str = "Hello, World!";
    char test_chars[] = {'H', 'e', 'o', ' ', 'W', '!', 'x', '\0'};
    int num_tests = sizeof(test_chars) / sizeof(test_chars[0]);

    // Itera sobre cada caractere do array e testa com strchr e ft_strchr
    for (int i = 0; i < num_tests; i++) {
        char c = test_chars[i];
        char *expected = strchr(str, c);  // Função padrão
        char *result = ft_strchr(str, c);  // Sua função

        printf("Testing ft_strchr with '%c'\n", c);
        if (expected) {
            printf("Expected (strchr): '%c' at %ld\n", *expected, expected - str);
        } else {
            printf("Expected (strchr): NULL\n");
        }
        if (result) {
            printf("Got (ft_strchr): '%c' at %ld\n\n", *result, result - str);
        } else {
            printf("Got (ft_strchr): NULL\n\n");
        }
    }

    return 0;
}
