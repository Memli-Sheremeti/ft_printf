/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 09:44:00 by mshereme          #+#    #+#             */
/*   Updated: 2023/11/21 09:29:31 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>

# define BASEU "0123456789ABCDEF"
# define BASEL "0123456789abcdef"

int	ft_printf(const char *format, ...);
int	ft_format(char spe, va_list ap);
int	ft_print_char(int c);
int	ft_print_str(char *str);
int	ft_print_ptr(uintptr_t ptr);
int	ft_print_num(long nb);
int	ft_print_hex(unsigned int nb, char spe);
int	ft_print_decimal(unsigned int nb);
int	ft_print_sign(int c);

#endif
