#include <stdio.h>

int ft_str_is_alpha(char *str)
{   
    
    int i = 0;
    while (str[i] >= 'a' && str[i] <= 'z')
        i++;

    
    
        if (str[i] == '\0')
            return 1;
        
        else
            return 0;
        
    
    return 0;
}

int main(void)
{
    char str[] = "asdfasdf";

    char *P_str = str;
    printf("%i", ft_str_is_alpha(P_str));
    ft_str_is_alpha(P_str);
}