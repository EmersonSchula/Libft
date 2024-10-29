#include <stdio.h>
#include "libft.h"

// Função que converte caracteres minúsculos em maiúsculos se o índice for par
void example_function(unsigned int i, char *c)
{
    if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
        *c -= 32;  // Converte para maiúsculas
}

int main(void)
{
    char s[] = "hello world";
    ft_striteri(s, example_function);

    printf("Modificado: %s\n", s); // Deve imprimir "HeLlO WoRlD"
    return 0;
}
