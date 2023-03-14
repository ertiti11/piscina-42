#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str){
        write(1, &(*str), 1);
        str++;
    }
    

		
        
        
}

int main(void){
    char str[] = "malaga42";

    char *pstr;

    pstr = str;
    ft_putstr(pstr);

    
    
    }