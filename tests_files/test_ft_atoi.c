#include <stdio.h>
#include <stdlib.h>
#include "libft.h" // Supondo que ft_atoi esteja declarada em libft.h

int main(void) {
    // Caso de teste 1: Número positivo
    char *str1 = "42";
    printf("Testing ft_atoi with '42'\n");
    printf("Expected: %d\n", atoi(str1));   // Função padrão
    printf("Got: %d\n\n", ft_atoi(str1));   // Sua função

    // Caso de teste 2: Número negativo
    char *str2 = "-42";
    printf("Testing ft_atoi with '-42'\n");
    printf("Expected: %d\n", atoi(str2)); 
    printf("Got: %d\n\n", ft_atoi(str2));

    // Caso de teste 3: Número com espaços iniciais
    char *str3 = "   1234";
    printf("Testing ft_atoi with '   1234'\n");
    printf("Expected: %d\n", atoi(str3)); 
    printf("Got: %d\n\n", ft_atoi(str3));

    // Caso de teste 4: String com espaços e número negativo
    char *str4 = "   -56";
    printf("Testing ft_atoi with '   -56'\n");
    printf("Expected: %d\n", atoi(str4)); 
    printf("Got: %d\n\n", ft_atoi(str4));

    // Caso de teste 5: String com caracteres inválidos após número
    char *str5 = "42abc";
    printf("Testing ft_atoi with '42abc'\n");
    printf("Expected: %d\n", atoi(str5)); 
    printf("Got: %d\n\n", ft_atoi(str5));

    // Caso de teste 6: String inválida
    char *str6 = "abc";
    printf("Testing ft_atoi with 'abc'\n");
    printf("Expected: %d\n", atoi(str6)); 
    printf("Got: %d\n\n", ft_atoi(str6));

    // Caso de teste 7: String zero
    char *str7 = "0";
    printf("Testing ft_atoi with '0'\n");
    printf("Expected: %d\n", atoi(str7)); 
    printf("Got: %d\n\n", ft_atoi(str7));

    // Caso de teste 8: Número muito grande
    char *str8 = "2147483647"; // INT_MAX
    printf("Testing ft_atoi with '2147483647'\n");
    printf("Expected: %d\n", atoi(str8)); 
    printf("Got: %d\n\n", ft_atoi(str8));

    // Caso de teste 9: Número muito pequeno
    char *str9 = "-2147483648"; // INT_MIN
    printf("Testing ft_atoi with '-2147483648'\n");
    printf("Expected: %d\n", atoi(str9)); 
    printf("Got: %d\n\n", ft_atoi(str9));

	// Caso de teste 10:
    char *str10 = "    ----+----42";
    printf("Testing ft_atoi with '    ----+----42'\n");
    printf("Expected: %d\n", atoi(str10));   // Função padrão
    printf("Got: %d\n\n", ft_atoi(str10));   // Sua função

    return 0;
}
