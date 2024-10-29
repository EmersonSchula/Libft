#include <stdio.h>
#include <ctype.h>  // Para a função padrão isalnum
#include "libft.h"  // Supondo que ft_isalnum esteja declarada em libft.h

int main(void) {
    // Array de caracteres para teste
    char test_chars[] = {'0', '5', '9', 'a', 'Z', '!', ' ', '1', '2', '8', 'b', 'y', '#', '@', 'G', 'M'};
    int num_tests = sizeof(test_chars) / sizeof(test_chars[0]);

    // Itera sobre cada caractere do array e testa com isalnum e ft_isalnum
    for (int i = 0; i < num_tests; i++) {
        char c = test_chars[i];
        int expected = isalnum(c) != 0;   // Normaliza o valor de retorno de isalnum para 0 ou 1
        int result = ft_isalnum(c);

        printf("Testing ft_isalnum with '%c'\n", c);
        printf("Expected (isalnum): %d\n", expected);   // 0 ou 1
        printf("Got (ft_isalnum): %d\n\n", result); // 0 ou 1
    }

    return 0;
}
