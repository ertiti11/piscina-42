#include <stdio.h>


int ft_str_is_lowercase(char *str)
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
    char str[] = "asdfa";

    char *P_str = str;
    printf("%i", ft_str_is_lowercase(P_str));
    ft_str_is_lowercase(P_str);
}

