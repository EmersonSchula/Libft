#include "libft.h"

int main(void)
{
    ft_putnbr_fd(12345, 1);  // Escreve "12345" na saída padrão (stdout)
    write(1, "\n", 1);       // Nova linha
    ft_putnbr_fd(-12345, 1); // Escreve "-12345" na saída padrão (stdout)
    write(1, "\n", 1);       // Nova linha
    ft_putnbr_fd(0, 1);      // Escreve "0" na saída padrão (stdout)
    write(1, "\n", 1);       // Nova linha
    ft_putnbr_fd(-2147483648, 1); // Escreve "-2147483648" na saída padrão (stdout)
    write(1, "\n", 1);       // Nova linha

    return 0;
}
