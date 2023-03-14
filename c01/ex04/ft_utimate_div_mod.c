#include <stdio.h>



void ft_ultimate_div_mod(int *a, int *b){
    *a = *a/ *b;
    *b = *a%*b;

}



int main(void){
int a= 4;

int b = 2;

ft_ultimate_div_mod(&a, &b);

printf("%i\n", a);
printf("%i", b);



}