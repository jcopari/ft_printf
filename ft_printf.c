/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcopari- <jcopari-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 16:54:01 by jcopari-          #+#    #+#             */
/*   Updated: 2025/09/08 13:15:09 by jcopari-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
//cspdiuxX%

int ft_printf(const char *texto, ...)
{
	va_list variaveis;
	unsigned int caracteres;
	
	caracteres = 0;
	va_start(variaveis, texto);
	while(*texto != '\0')
	{
		if(*texto != '%')
		{
			ft_putchar_fd(*texto, 1);
			caracteres++;
		}
		else
		{
			caracteres += formatacao(*(texto + 1), variaveis);
			texto++;
		}
		texto++;
	}
	va_end(variaveis);
	return (caracteres);
}
