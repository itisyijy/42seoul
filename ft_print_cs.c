/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_cs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongyle <jeongyle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 16:27:49 by jeongyle          #+#    #+#             */
/*   Updated: 2022/12/29 22:48:28 by jeongyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printchar(va_list ap)
{
	int				len;
	unsigned char	arg;

	arg = va_arg(ap, int);
	write(1, &arg, 1);
	len = 1;
	return (len);
}

int	ft_printstr(va_list ap)
{
	int		len;
	char	*arg;

	len = 0;
	arg = (char *)va_arg(ap, const char *);
	if (!arg)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (arg[len] != '\0')
	{
		write(1, &arg[len], 1);
		len++;
	}
	return (len);
}
