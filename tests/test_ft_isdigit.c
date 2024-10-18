#include <stdio.h>
#include <ctype.h>  // Para a função padrão isdigit
#include "libft.h"  // Supondo que ft_isdigit esteja declarada em libft.h

int main(void) {
    // Array de caracteres para teste
    char test_chars[] = {'0', '5', '9', 'a', 'Z', '!', ' ', '1', '2', '8'};
    int num_tests = sizeof(test_chars) / sizeof(test_chars[0]);

    // Itera sobre cada caractere do array e testa com isdigit e ft_isdigit
    for (int i = 0; i < num_tests; i++) {
        char c = test_chars[i];
        printf("Testing ft_isdigit with '%c'\n", c);
        printf("Expected (isdigit): %d\n", isdigit(c));   // Função padrão
        printf("Got (ft_isdigit): %d\n\n", ft_isdigit(c)); // Sua função
    }

    return 0;
}
