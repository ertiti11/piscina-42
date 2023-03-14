#include <stdio.h>



int ft_strlen(char *str){

    int count =0;

    while (*str){
        count++;
        str++;
    }

    return count;


}



int main(void){
    char str[] = "ornitorrinco";
    char *P_str;

    P_str = str;
    int number = ft_strlen(P_str);

    printf("%i", number);

}