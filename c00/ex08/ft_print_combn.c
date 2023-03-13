#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	pintar(int array[], int n)
{
	int		i;
	char	c;

	i = 0;
	while (i < n)
	{
		c = array[i] + '0';
		write(1, &c, 1);
		i++;
	}
}

void	recursive(int n, int array[], int i)
{
	int	j;

	j = 0;
	while (j <= 9)
	{
		while (i <= n)
		{
			if (i == 0)
			{
				array[i] = 0;
			}
			else
			{
				array[i] = array[i - 1] + 1;
			}
			i++;
		}
		pintar(array, n);
		write(1, ", ", 2);
		j++;
	}
}

int	ft_print_combn(int n)
{
	int	array[n];

	if (n > 10)
	{
		return (1);
	}
	recursive(n, array, 0);
}

int	main(void)
{
	ft_print_combn(9);
}