/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:17:42 by mshereme          #+#    #+#             */
/*   Updated: 2023/11/13 17:41:43 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char spe, va_list ap)
{
	int	count;

	count = 0;
	if (spe == 'c')
		count += ft_print_char(va_arg(ap, int));
	else if (spe == 's')
		count += ft_print_str(va_arg(ap, char *));
	else if (spe == 'p')
		count += ft_print_ptr(va_arg(ap, long long unsigned int));
	else if	(spe == 'u')
		count += ft_print_num(va_arg(ap, unsigned int));
	else if (spe == 'd' || spe == 'i')
		count += ft_print_num(va_arg(ap, int));
	else if (spe == 'x' || spe == 'X')
		count += ft_print_hex(va_arg(ap, unsigned int), spe);
	else
		count += write(1, &spe, 1);
	return (count);
}
