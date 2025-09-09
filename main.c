#include "libftprintf.h"
#include <stdio.h>
#include <limits.h>


int main(void)
{
    printf("\n--- Printf Original ---\ns: [%s], d: [%d], p: [%p], x: [%x], u: [%u], c: [%c], %%\n", "string", -42, NULL, 255, 123, 'Z');
    ft_printf("\n--- ft_printf ---\ns: [%s], d: [%d], p: [%p], x: [%x], u: [%u], c: [%c], %%\n", "string", -42, NULL, 255, 123, 'Z');
    return (0);
}









// void print_returns(int original_ret, int ft_ret)
// {
//     printf("\n> Retornos (Original/Sua Ft): %d/%d\n\n", original_ret, ft_ret);
// }

// int main(void)
// {
//     int original_ret;
//     int ft_ret;
//     char *ptr_null = NULL;
//     char *ptr_valid = "teste";

//     printf("--- Iniciando testes do ft_printf ---\n\n");

//     // === Testes para %c ===
//     printf("--- Testes para %%c ---\n");
//     printf("Original: ");
//     original_ret = printf("%c", 'A');
//     printf("\nSua Ft..: ");
//     ft_ret = ft_printf("%c", 'A');
//     print_returns(original_ret, ft_ret);

//     // === Testes para %s ===
//     printf("--- Testes para %%s ---\n");
//     printf("Original: ");
//     original_ret = printf("%s", "Hello, World!");
//     printf("\nSua Ft..: ");
//     ft_ret = ft_printf("%s", "Hello, World!");
//     print_returns(original_ret, ft_ret);

//     printf("Original (string vazia): ");
//     original_ret = printf("%s", "");
//     printf("\nSua Ft.. (string vazia): ");
//     ft_ret = ft_printf("%s", "");
//     print_returns(original_ret, ft_ret);

//     printf("Original (ponteiro NULL): ");
//     original_ret = printf("%s", ptr_null);
//     printf("\nSua Ft.. (ponteiro NULL): ");
//     ft_ret = ft_printf("%s", ptr_null);
//     print_returns(original_ret, ft_ret);

//     // === Testes para %d e %i ===
//     printf("--- Testes para %%d e %%i ---\n");
//     printf("Original: ");
//     original_ret = printf("%d", 42);
//     printf("\nSua Ft..: ");
//     ft_ret = ft_printf("%d", 42);
//     print_returns(original_ret, ft_ret);

//     printf("Original (negativo): ");
//     original_ret = printf("%i", -42);
//     printf("\nSua Ft.. (negativo): ");
//     ft_ret = ft_printf("%i", -42);
//     print_returns(original_ret, ft_ret);
    
//     printf("Original (INT_MAX): ");
//     original_ret = printf("%d", INT_MAX);
//     printf("\nSua Ft.. (INT_MAX): ");
//     ft_ret = ft_printf("%d", INT_MAX);
//     print_returns(original_ret, ft_ret);

//     printf("Original (INT_MIN): ");
//     original_ret = printf("%d", INT_MIN);
//     printf("\nSua Ft.. (INT_MIN): ");
//     ft_ret = ft_printf("%d", INT_MIN);
//     print_returns(original_ret, ft_ret);

//     // === Testes para %u ===
//     printf("--- Testes para %%u ---\n");
//     printf("Original: ");
//     original_ret = printf("%u", 42u);
//     printf("\nSua Ft..: ");
//     ft_ret = ft_printf("%u", 42u);
//     print_returns(original_ret, ft_ret);
    
//     printf("Original (UINT_MAX): ");
//     original_ret = printf("%u", UINT_MAX);
//     printf("\nSua Ft.. (UINT_MAX): ");
//     ft_ret = ft_printf("%u", UINT_MAX);
//     print_returns(original_ret, ft_ret);

//     // === Testes para %x e %X ===
//     printf("--- Testes para %%x e %%X ---\n");
//     printf("Original (hex min): ");
//     original_ret = printf("%x", 255);
//     printf("\nSua Ft.. (hex min): ");
//     ft_ret = ft_printf("%x", 255);
//     print_returns(original_ret, ft_ret);

//     printf("Original (hex mai): ");
//     original_ret = printf("%X", 255);
//     printf("\nSua Ft.. (hex mai): ");
//     ft_ret = ft_printf("%X", 255);
//     print_returns(original_ret, ft_ret);

//     // === Testes para %p ===
//     printf("--- Testes para %%p ---\n");
//     printf("Original (ponteiro NULL): ");
//     original_ret = printf("%p", ptr_null);
//     printf("\nSua Ft.. (ponteiro NULL): ");
//     ft_ret = ft_printf("%p", ptr_null);
//     print_returns(original_ret, ft_ret);

//     printf("Original (ponteiro valido): ");
//     original_ret = printf("%p", ptr_valid);
//     printf("\nSua Ft.. (ponteiro valido): ");
//     ft_ret = ft_printf("%p", ptr_valid);
//     print_returns(original_ret, ft_ret);

//     // === Teste para %% ===
//     printf("--- Teste para %%%% ---\n");
//     printf("Original: ");
//     original_ret = printf("%%");
//     printf("\nSua Ft..: ");
//     ft_ret = ft_printf("%%");
//     print_returns(original_ret, ft_ret);

//     // // === Teste combinado ===
//     // printf("--- Teste combinado ---\n");
//     // printf("Original: ");
//     // original_ret = printf("Mix: %s %d %c %x %p %u %%\n", "Str", 42, 'C', 160, ptr_valid, 123u);
//     // printf("Sua Ft..: ");
//     // ft_ret = ft_printf("Mix: %s %d %c %x %p %u %%\n", "Str", 42, 'C', 160, ptr_valid, 123u);
//     // print_returns(original_ret, ft_ret); 

//     printf("--- Fim dos testes ---\n");
//     return (0);
// }