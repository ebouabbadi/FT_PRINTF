/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_adres.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 11:34:40 by ebouabba          #+#    #+#             */
/*   Updated: 2021/12/10 16:10:18 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_adres(unsigned long n)
{
	int	count;

	count = 0;
	count += ft_print_string("0x");
	if (n == 0)
		count += ft_print_char('0');
	else
		count += ft_adres(n);
	return (count);
}

int	ft_adres(unsigned long n)
{
	int	count;

	count = 0;
	if (n > 15)
	{
		count += ft_adres(n / 16);
		count += ft_adres(n % 16);
	}
	else
	{
		if (n <= 9)
			count += ft_print_char(n + '0');
		else
			count += ft_print_char(n - 10 + 'a');
	}
	return (count);
}
