#include <stdio.h>


int ft_str_is_uppercase(char *str)
{   
    
    int i = 0;
    while (str[i] >= 'A' && str[i] <= 'Z')
        i++;

        if (str[i] == '\0')
            return 1;
        
        else
            return 0;
        
    
    return 0;
}

int main(void)
{
    char str[] = "ASDFAHHOP";

    char *P_str = str;
    printf("%i", ft_str_is_uppercase(P_str));
    ft_str_is_uppercase(P_str);
}

