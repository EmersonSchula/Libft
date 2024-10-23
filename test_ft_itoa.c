#include <stdio.h>
#include "libft.h"  // Supondo que ft_itoa esteja declarada em libft.h

int main(void)
{
    int num = -12345;
    char *str = ft_itoa(num);
    
    if (str)
    {
        printf("ft_itoa(%d) = %s\n", num, str);  // Deve imprimir "-12345"
        free(str);  // Não se esqueça de liberar a memória alocada
    }

    num = 0;
    str = ft_itoa(num);
    if (str)
    {
        printf("ft_itoa(%d) = %s\n", num, str);  // Deve imprimir "0"
        free(str);
    }

    return 0;
}
