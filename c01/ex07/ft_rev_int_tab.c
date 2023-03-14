#include <stdio.h>




void ft_rev_int_tab(int *tab, int size){
    int arr[size];
    int index = size-1; // para recorre el array, como empieza en 0 se le resta uno
    int i = 0;

    while (index >=0){
        arr[i] = tab[index];
        i++;
        index--;
    }
    i=0;

    while (i <=size-1){
        tab[i] = arr[i];
        i++;
    }
    




}



int main(void){

int tab[] = {1,2,3,4};
int *ptr = tab;
int size = 4;

ft_rev_int_tab(ptr, size);

int i = 0;
while(i<=size-1){
        printf("%i ", tab[i]);
        i++;
    }

}