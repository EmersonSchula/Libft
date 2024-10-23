#include "libft.h"

int main(void)
{
    ft_putendl_fd("Hello, World!", 1);  // Escreve na saída padrão (stdout)
    ft_putendl_fd("Erro! Algo deu errado!", 2);  // Escreve no erro padrão (stderr)

    return 0;
}
