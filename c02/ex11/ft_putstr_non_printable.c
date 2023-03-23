/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprieto- <aprieto-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 17:14:17 by aprieto-          #+#    #+#             */
/*   Updated: 2023/03/23 16:28:36 by aprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hexa(int num)
{
	char	*hex16;

	hex16 = "0123456789abcdef";
	write(1, &hex16[num / 16], 1);
	write(1, &hex16[num % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 0 && str[i] <= 31)
		{
			write(1, "\\", 1);
			hexa(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
