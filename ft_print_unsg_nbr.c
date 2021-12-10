/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsg_nbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 07:00:56 by ebouabba          #+#    #+#             */
/*   Updated: 2021/12/10 16:24:47 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsg_nbr(unsigned int n)
{
	int	count;

	count = 0;
	if (n <= 9)
		count += ft_print_char(n + '0');
	else
	{
		count += ft_print_nbr(n / 10);
		count += ft_print_nbr(n % 10);
	}
	return (count);
}
