#include <stdio.h>


int ft_str_is_numeric(char *str)
{   
    
    int i = 0;
    while (str[i] >= '0' && str[i] <= '9')
        i++;

        if (str[i] == '\0')
            return 1;
        
        else
            return 0;
        
    
    return 0;
}

int main(void)
{
    char str[] = "234234234";

    char *P_str = str;
    printf("%i", ft_str_is_numeric(P_str));
    ft_str_is_numeric(P_str);
}

