#include <unistd.h>
#include "ft_putchar.c"


void	ft_putchar(char c);

void rush(int x, int y) {
    for (int i = 1; i <= x; i++) {
        if (i == 1) {
            ft_putchar('A');
        } else if (i == x) {
            ft_putchar('C');
            
        } else {
            ft_putchar('B');
        }
    }

ft_putchar('\n');

    for (int i = 1; i <y-1; i++) {
        
        if(x>1){
            ft_putchar('B');
            for (int j = 0; j < x - 2; j++) {
                ft_putchar(' ');
            }
            
        }

        
        if (i >=1){
            ft_putchar('S');
            ft_putchar('\n');
            
        }
        
    }

    for (int i = 1; i <= x; i++) {
        if (i == 1) {
            ft_putchar('C');
        } else if (i == x) {
            ft_putchar('A');
            ft_putchar('\n');
        } else {
            ft_putchar('B');
        }
    }
}

