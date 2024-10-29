#include "libft.h"

int main(void)
{
    ft_putstr_fd("Hello, World!\n", 1);  // Escreve na saída padrão (stdout)
    ft_putstr_fd("Erro! Algo deu errado!\n", 2);  // Escreve no erro padrão (stderr)

    return 0;
}
