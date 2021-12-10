/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:42:42 by ebouabba          #+#    #+#             */
/*   Updated: 2021/12/10 16:05:43 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stddef.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

int		ft_printf(const char *format, ...);
int		ft_cherche_type(const char format, va_list var);
int		ft_print_char(char c);
int		ft_print_string(char *str);
int		ft_print_nbr(int n);
int		ft_strlen(char *str);
int		ft_print_unsg_nbr(unsigned int n);
int		ft_print_hexa(unsigned int n, const char format);
int		ft_print_adres(unsigned long n);
int		ft_adres(unsigned long n);

#endif
