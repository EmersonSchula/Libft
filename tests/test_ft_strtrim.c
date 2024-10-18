#include <stdio.h>
#include "libft.h"  // Supondo que ft_strtrim esteja declarada em libft.h

int main(void) {
    char *s1 = "   Hello, World!   ";
    char *set = " ";
    char *result = ft_strtrim(s1, set);

    if (result) {
        printf("Result: \"%s\"\n", result);  // Deve imprimir "Hello, World!"
        free(result);
    } else {
        printf("ft_strtrim failed.\n");
    }

    // Teste com múltiplos caracteres no set
    s1 = "xxxHello, World!xxx";
    set = "x";
    result = ft_strtrim(s1, set);
    if (result) {
        printf("Result with 'x' set: \"%s\"\n", result);  // Deve imprimir "Hello, World!"
        free(result);
    }

    return 0;
}
