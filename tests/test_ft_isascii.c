#include <stdio.h>
#include <ctype.h>  // Para a função padrão isascii
#include "libft.h"  // Supondo que ft_isascii esteja declarada em libft.h

int main(void) {
    // Array de caracteres para teste, incluindo valores fora do intervalo ASCII
    int test_chars[] = {0, 127, 128, -1, 'A', 'z', 65, 255, '!', ' '};
    int num_tests = sizeof(test_chars) / sizeof(test_chars[0]);

    // Itera sobre cada caractere do array e testa com isascii e ft_isascii
    for (int i = 0; i < num_tests; i++) {
        int c = test_chars[i];
        int expected = isascii(c) != 0;   // Normaliza o valor de retorno de isascii para 0 ou 1
        int result = ft_isascii(c);

        printf("Testing ft_isascii with '%d'\n", c);
        printf("Expected (isascii): %d\n", expected);   // 0 ou 1
        printf("Got (ft_isascii): %d\n\n", result); // 0 ou 1
    }

    return 0;
}
