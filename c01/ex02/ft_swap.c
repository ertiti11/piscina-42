#include <stdio.h>



void ft_swap(int *a, int *b){
int aux;

aux = *b;

*b = *a;

*a = aux;


}



int main(void){

int a = 3;
int b = 4;


ft_swap(&a, &b);


printf("a: %i b: %i",a,b);



}