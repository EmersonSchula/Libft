#include <stdio.h>
#include <ctype.h>  // Para a função padrão toupper
#include "libft.h"  // Supondo que ft_toupper esteja declarada em libft.h

int main(void) {
    // Array de caracteres para teste
    char test_chars[] = {'a', 'z', 'A', 'Z', 'b', 'm', '1', '!', ' ', 'g'};
    int num_tests = sizeof(test_chars) / sizeof(test_chars[0]);

    // Itera sobre cada caractere do array e testa com toupper e ft_toupper
    for (int i = 0; i < num_tests; i++) {
        char c = test_chars[i];
        int expected = toupper(c);   // Função padrão
        int result = ft_toupper(c);  // Sua função

        printf("Testing ft_toupper with '%c'\n", c);
        printf("Expected (toupper): '%c' (%d)\n", expected, expected);
        printf("Got (ft_toupper): '%c' (%d)\n\n", result, result);
    }

    return 0;
}
