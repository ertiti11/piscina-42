/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprieto- <aprieto-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:52:07 by aprieto-          #+#    #+#             */
/*   Updated: 2023/03/20 17:13:33 by aprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	j;
	unsigned int	i;

	j = 0;
	i = 0;
	while (src[j] != '\0')
		j++;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (j);
}

// int main(void){

//     char str[] = "hola que tal que buen dia hace";

//     char dst[] = "";

//     char *Pstr = str;
//     char *Pdst = dst;

//     unsigned int size;
//     size = 4;

//     printf("%u", ft_strlcpy(Pdst, Pstr, size));

//     printf("%s", dst);

// }