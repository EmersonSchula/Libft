#include "libft.h"

int main(void)
{
    ft_putchar_fd('H', 1); // Escreve o caractere 'H' na saída padrão (stdout)
    ft_putchar_fd('\n', 1); // Escreve um caractere de nova linha (newline) na saída padrão (stdout)
    ft_putchar_fd('E', 2); // Escreve o caractere 'E' no erro padrão (stderr)
    ft_putchar_fd('\n', 2); // Escreve um caractere de nova linha (newline) no erro padrão (stderr)

    return 0;
}
