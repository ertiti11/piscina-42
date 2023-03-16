/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprieto- <aprieto-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:45:18 by aprieto-          #+#    #+#             */
/*   Updated: 2023/03/16 16:45:53 by aprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_rev_int_tab(int *tab, int size)
{
	int	arr[size];
	int	i;

	int index = size - 1; 
		
	i = 0;
	while (index >= 0)
	{
		arr[i] = tab[index];
		i++;
		index--;
	}
	i = 0;
	while (i <= size - 1)
	{
		tab[i] = arr[i];
		i++;
	}
}

