#include <stdio.h>
#include <ctype.h>  // Para a função padrão isprint
#include "libft.h"  // Supondo que ft_isprint esteja declarada em libft.h

int main(void) {
    // Array de caracteres para teste, incluindo limites e valores fora do intervalo imprimível
    int test_chars[] = {31, 32, 126, 127, 'A', 'z', 65, 255, '!', ' '};
    int num_tests = sizeof(test_chars) / sizeof(test_chars[0]);

    // Itera sobre cada caractere do array e testa com isprint e ft_isprint
    for (int i = 0; i < num_tests; i++) {
        int c = test_chars[i];
        int expected = isprint(c) != 0;   // Normaliza o valor de retorno de isprint para 0 ou 1
        int result = ft_isprint(c);

        printf("Testing ft_isprint with '%d'\n", c);
        printf("Expected (isprint): %d\n", expected);   // 0 ou 1
        printf("Got (ft_isprint): %d\n\n", result); // 0 ou 1
    }

    return 0;
}
