#include <stdio.h>
#include <string.h>  // Para a função padrão memchr
#include "libft.h"   // Supondo que ft_memchr esteja declarada em libft.h

int main(void) {
    const char str[] = "Hello, World!";
    char test_chars[] = {'H', 'o', 'l', ' ', 'W', '!', 'x', '\0'};
    int num_tests = sizeof(test_chars) / sizeof(test_chars[0]);

    // Itera sobre cada caractere do array e testa com memchr e ft_memchr
    for (int i = 0; i < num_tests; i++) {
        char c = test_chars[i];
        char *expected = memchr(str, c, sizeof(str));  // Função padrão
        char *result = ft_memchr(str, c, sizeof(str));  // Sua função

        printf("Testing ft_memchr with '%c'\n", c);
        if (expected) {
            printf("Expected (memchr): '%c' at %ld\n", *expected, expected - str);
        } else {
            printf("Expected (memchr): NULL\n");
        }
        if (result) {
            printf("Got (ft_memchr): '%c' at %ld\n\n", *result, result - str);
        } else {
            printf("Got (ft_memchr): NULL\n\n");
        }
    }

    return 0;
}
