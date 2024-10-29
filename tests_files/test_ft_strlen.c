#include <stdio.h>
#include <string.h>
#include "libft.h" // Inclua o cabeçalho com sua função ft_strlen

int main(void) {
    // Caso de teste 1: String normal
    char *str1 = "Hello, world!";
    printf("Testing ft_strlen with 'Hello, world!'\n");
    printf("Expected: %lu\n", strlen(str1)); // Função original
    printf("Got: %lu\n\n", ft_strlen(str1)); // Sua função

    // Caso de teste 2: String vazia
    char *str2 = "";
    printf("Testing ft_strlen with an empty string\n");
    printf("Expected: %lu\n", strlen(str2)); // Função original
    printf("Got: %lu\n\n", ft_strlen(str2)); // Sua função

    // Caso de teste 3: String com caracteres especiais
    char *str3 = "42 São Paulo!";
    printf("Testing ft_strlen with '42 São Paulo!'\n");
    printf("Expected: %lu\n", strlen(str3)); // Função original
    printf("Got: %lu\n\n", ft_strlen(str3)); // Sua função

    return 0;
}
