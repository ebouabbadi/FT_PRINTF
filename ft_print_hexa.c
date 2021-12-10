/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 10:47:16 by ebouabba          #+#    #+#             */
/*   Updated: 2021/12/10 16:12:22 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa(unsigned int n, const char format)
{
	int	count;

	count = 0;
	if (n == 0)
		return (write(1, "0", 1));
	if (n >= 16)
	{
		count += ft_print_hexa(n / 16, format);
		count += ft_print_hexa(n % 16, format);
	}
	else
	{
		if (n <= 9)
			count += ft_print_char(n + '0');
		else
		{
			if (format == 'x')
				count += ft_print_char(n - 10 + 'a');
			if (format == 'X')
				count += ft_print_char(n - 10 + 'A');
		}
	}
	return (count);
}
