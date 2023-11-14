/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:34:06 by mshereme          #+#    #+#             */
/*   Updated: 2023/11/13 17:56:45 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(int c)
{
	return (write(1, &c, 1));
}

int	ft_print_str(char *str)
{
	int	i;

	if (!str)
		return (write(1, "(null)", 6));
	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}


int ft_calculs_hex(long long unsigned ptr, int len)
{
    char    *base;

    base = "0123456789abcdef";
    if (ptr < 16)
        return (len + ft_print_char(base[ptr]));
    else
    {
        len += ft_calculs_hex(ptr / 16, len);
        return (len + ft_calculs_hex(ptr % 16, len));
    }
}

int	ft_print_ptr(long long unsigned ptr)
{
    int     len;

    len = 0;
	if (!ptr)
		return (write(1,"(nil)", 5));
    len += write(1, "0x", 2);
    if (ptr < 16)
        return (len + ft_print_char(BASEL[ptr]));
    else
    { 
        len = ft_print_ptr(ptr / 16);
        return (len + ft_print_ptr(ptr % 16));
    } 
}
