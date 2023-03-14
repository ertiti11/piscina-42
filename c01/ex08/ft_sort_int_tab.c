#include <stdio.h>


void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void ft_sort_int_tab(int *tab, int size){
    int i =0;
    int aux;
    int index  = 0;
    int nextIndex;
    while (i<size-1){
        
        while(index<size -i -1){

            nextIndex = index+1;

            if (tab[index] > tab[nextIndex]){
                swap(&tab[index], &tab[nextIndex]);
                // tab[index] = aux;
                // tab[nextIndex] = tab[index];
                // tab[index] = aux;
                
            }
            index++;
        }
        
        i++;
    }

}



int main(void){

    int tab[] ={20,5,1,7,3};
    int *p  = tab;
    int size =5;

    ft_sort_int_tab(p, size);
    printf("%i, %i, %i, %i, %i", tab[0],tab[1],tab[2],tab[3],tab[4]);
   


}