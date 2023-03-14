#include <stdio.h>


void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab [i];
				tab[i] = tab [i + 1];
				tab [i + 1] = swap;
			}
			i++;
		}
		size--;
	}
}

int main(void){

    int tab[] ={20,5,1,7,3};
    int *p  = tab;
    int size =5;

    ft_sort_int_tab(p, size);
    printf("%i, %i, %i, %i, %i", tab[0],tab[1],tab[2],tab[3],tab[4]);
   


}