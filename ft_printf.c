/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcopari- <jcopari-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 16:54:01 by jcopari-          #+#    #+#             */
/*   Updated: 2025/08/18 17:41:01 by jcopari-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h> 

int ft_putchar(char c)
{
	return (write (1, &c, 1));
}
int ft_putstr(char *s)
{
	int count;

	count = 0;
	if (!s)
		s = "(null)";
	while (*s)
	{
		count += ft_putchar(*s);
		s++;
	}
	return (count);
}

int	print_format_handler()
{
	
}

int	ft_printf(const char *format, ...)
{
	va_list args;
	int 	count = 0;
	int		i = 0;
	
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
		}
		else 
		{
			count += ft_putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (count);
}
