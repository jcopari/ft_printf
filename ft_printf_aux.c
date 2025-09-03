/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_aux.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcopari- <jcopari-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:04:32 by jcopari-          #+#    #+#             */
/*   Updated: 2025/09/02 16:40:40 by jcopari-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void    formatacao(char c, va_list lista)
{
    if (c == '%')
        ft_putchar_fd('%',1);
    else if(c == 'c')
        ft_putchar_fd(c, 1);
    
}