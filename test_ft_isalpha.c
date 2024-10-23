#include <stdio.h>

int ft_isalpha(int c);

int main(void) {
    printf("ft_isalpha('A') = %d\n", ft_isalpha('A')); // Esperado: 1
    printf("ft_isalpha('z') = %d\n", ft_isalpha('z')); // Esperado: 1
    printf("ft_isalpha('5') = %d\n", ft_isalpha('5')); // Esperado: 0
    printf("ft_isalpha(' ') = %d\n", ft_isalpha(' ')); // Esperado: 0
    printf("ft_isalpha('!') = %d\n", ft_isalpha('!')); // Esperado: 0
    return 0;
}
