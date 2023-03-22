/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprieto- <aprieto-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 17:14:17 by aprieto-          #+#    #+#             */
/*   Updated: 2023/03/21 14:53:30 by aprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		value;
	char	*hexadecimal;

	hexadecimal = "0123456789abcdef";
	while (*str != '0')
	{
		if (value < 32 || value > 126)
		{
			ft_putchar('\\');
			ft_putchar(hexadecimal[value / 16]);
			ft_putchar(hexadecimal[value % 16]);
		}
		else
		{
			ft_putchar(*str);
		}
		str++;
	}
}
