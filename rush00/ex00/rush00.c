#include <unistd.h>
#include "ft_putchar.c"


void	ft_putchar(char c);

void rush(int x, int y) {
    for (int i = 1; i <= x; i++) {
        if (i == 1) {
            ft_putchar('o');
        } else if (i == x) {
            ft_putchar('o');
        } else {
            ft_putchar('-');
        }
    }

 ft_putchar('\n');

    for (int i = 1; i < y-1; i++) {

        if (x>1)
        {
            ft_putchar('|');
        for (int j = 0; j < x - 2; j++) {
            ft_putchar(' ');
        }
        }
        
        
        ft_putchar('|');
        ft_putchar('\n');
    }

    for (int i = 1; i <= x; i++) {
        if (i == 1) {
            ft_putchar('o');
        } else if (i == x) {
            ft_putchar('o');
            ft_putchar('\n');
        } else {
            ft_putchar('-');
        }
    }
}

