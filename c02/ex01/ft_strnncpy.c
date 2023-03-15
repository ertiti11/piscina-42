#include <stdio.h>


char *ft_strncpy(char *dest, char *src, unsigned int n){
    
    int i = 0;

    while (i<n){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    

    return dest;
}




int main(void){
    char dest[4];
    char *destt = dest;
    char src[] = "hola";
    unsigned int cant = 4;
    char *srcc = src;
    ft_strncpy(destt,srcc,cant);

    printf("%s", dest);

}