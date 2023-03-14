#include <unistd.h>
#include <stdio.h>

void ft(int *nbr){
    *nbr = 42;
}


int main (void){
    int *nbr;
    int numero;

    nbr = &numero;
    ft(nbr);
    printf("%d", numero);
}