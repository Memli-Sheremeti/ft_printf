/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:28:13 by mshereme          #+#    #+#             */
/*   Updated: 2023/11/13 14:47:13 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int	count;

	if (!format)
		return (0);
	va_start(ap, format);
	count = 0;
	while (*format)
	{
		if (format[0] == '%' && format[1] == '%')
			count += ft_print_char('%');
		else if (format[0] == '%' && format[1] == '\0')
			break ;
		else if (*format == '%')
			count += ft_format(*(++format), ap);
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(ap);
	return (count);
}
