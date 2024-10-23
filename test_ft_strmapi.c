#include <stdio.h>
#include "libft.h"

// Função que converte os caracteres em maiúsculas se o índice for par
char example_function(unsigned int i, char c)
{
	if (i % 2 == 0 && c >= 'a' && c <= 'z')
		return (c - 32);  // Converte para maiúsculas
	return c;
}

int main(void)
{
	char *s = "hello world";
	char *result = ft_strmapi(s, example_function);

	if (result)
	{
		printf("Original: %s\n", s);     // Deve imprimir "hello world"
		printf("Modificado: %s\n", result); // Deve imprimir "HeLlO WoRlD"
		free(result);  // Libera a memória alocada
	}

	return 0;
}
