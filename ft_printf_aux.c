/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_aux.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcopari- <jcopari-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:04:32 by jcopari-          #+#    #+#             */
/*   Updated: 2025/09/08 20:14:47 by jcopari-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int ft_putnbr_base(unsigned int n, char *base)
{
	unsigned long   len;
	int             count;
	
	len = (unsigned long)ft_strlen(base);
	count = 0;
	if (n >= len)
		count += ft_putnbr_base((n/len), base);
	count += ft_putchar_fd((base[n%len]),1);
	return (count);
}

static int ft_putpointer(void *ptr)
{
	unsigned long pointer;
	int counter;

	pointer = (unsigned long)ptr;
	counter = 0;
	if(!pointer)
		return (ft_putstr_fd("(nil)", 1));
	counter += ft_putstr_fd("0x", 1);
	counter += ft_putnbr_base(pointer, "0123456789abcdef");	
	return (counter);
}
int	formatacao(char c, va_list lista)
{
	if (c == '%')
		return(ft_putchar_fd('%',1));
	else if(c == 'c')
		return(ft_putchar_fd((char)va_arg(lista, int), 1));
	else if(c == 's')
		return (ft_putstr_fd((char *)va_arg(lista, char *),1));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr_fd((int)va_arg(lista, int),1));
	else if (c == 'u')
    	return (ft_putnbr_base(va_arg(lista, unsigned int), "0123456789"));
	else if (c == 'x')
    	return (ft_putnbr_base(va_arg(lista, unsigned int), "0123456789abcdef"));
	else if (c == 'X')
    	return (ft_putnbr_base(va_arg(lista, unsigned int), "0123456789ABCDEF"));
	else if (c == 'p')
		return (ft_putpointer(va_arg(lista, void *)));
	return (0);
}
