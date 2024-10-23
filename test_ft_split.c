#include <stdio.h>
#include "libft.h"  // Supondo que ft_split esteja declarada em libft.h

int main(void) {
    char **result;
    char *s = "Hello, how are you today?";
    char delimiter = ' ';

    result = ft_split(s, delimiter);

    if (result) {
        size_t i = 0;
        while (result[i]) {
            printf("result[%zu]: \"%s\"\n", i, result[i]);
            free(result[i]);  // Libera cada substring
            i++;
        }
        free(result);  // Libera o array de ponteiros
    }

    return 0;
}
