#include <stdio.h>
#include <ctype.h>  // Para a função padrão tolower
#include "libft.h"  // Supondo que ft_tolower esteja declarada em libft.h

int main(void) {
    // Array de caracteres para teste
    char test_chars[] = {'A', 'Z', 'a', 'z', 'B', 'M', '1', '!', ' ', 'G'};
    int num_tests = sizeof(test_chars) / sizeof(test_chars[0]);

    // Itera sobre cada caractere do array e testa com tolower e ft_tolower
    for (int i = 0; i < num_tests; i++) {
        char c = test_chars[i];
        int expected = tolower(c);   // Função padrão
        int result = ft_tolower(c);  // Sua função

        printf("Testing ft_tolower with '%c'\n", c);
        printf("Expected (tolower): '%c' (%d)\n", expected, expected);
        printf("Got (ft_tolower): '%c' (%d)\n\n", result, result);
    }

    return 0;
}
