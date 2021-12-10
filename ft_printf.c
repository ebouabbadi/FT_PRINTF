/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:35:55 by ebouabba          #+#    #+#             */
/*   Updated: 2021/12/10 16:37:38 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_cherche_type(const char format, va_list var)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_print_char(va_arg(var, int));
	else if (format == 's')
		count += ft_print_string(va_arg(var, char *));
	else if (format == 'd' || format == 'i')
		count += ft_print_nbr(va_arg(var, int));
	else if (format == 'u')
		count += ft_print_unsg_nbr(va_arg(var, unsigned int));
	else if (format == '%')
		count += ft_print_char('%');
	else if (format == 'x' || format == 'X')
		count += ft_print_hexa(va_arg(var, unsigned int), format);
	else if (format == 'p')
		count += ft_print_adres(va_arg(var, unsigned long));
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	var;
	int		i;
	int		count;

	va_start(var, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] != '%')
			count += ft_print_char(format[i]);
		else
		{
			count += ft_cherche_type(format[i + 1], var);
			i++;
		}
		i++;
	}
	va_end(var);
	return (count);
}
