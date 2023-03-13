// #include <unistd.h>
// #include <stdio.h>
// void ft_putchar(char c)
// {
//     write(1, &c, 1);
// }

// void pintar(int array[], int n)
// {

//     int i = 0;

//     while (i < n)
//     {
//         char c = array[i] + '0';
//         write(1, &c, 1);
//         i++;
//     }
// }

// void recursive(int n, int array[], int i)
// {
//     int j = 0;
//     while (j <= 9)
//     {
//         while (i <= n)
//         {   printf("i: %i\n",i);
            
//             // if (i == 0)
//             // {
//             //     array[i] = 0;
//             // }
//             // else
//             // {
//                 array[0]= 0;
//                 array[i] = array[i - 1]+1;
//             // }

//             i++;
//         }
        
//         pintar(array, n);
//         write(1,", ",2);
//         j++;
//     }
// }

// int ft_print_combn(int n)
// {
//     if (n > 10)
//     {
//         return 1;
//     }
//     int array[n];
//     recursive(n, array, 0);
// }
#include <unistd.h>



void ft_putchar(int c)
{   
    c += '0';

    write(1,&c,1);
}
void    ft_recursive(int array[], int n, int i)
{
    while(i < n){
        if (array[i] == 0){
            array[i] = 0;
        } else {
            array[i] = array[i - 1] + 1;
        }
        ft_putchar(array[i]);
        write(1," ",1);
        i++;
        
    }
    if (i < 20){
            ft_recursive(array, n, i);
        }
}

void    ft_print_combn(int n)
{
    int array[n];

    ft_recursive(array, n, 0);
}


int main(void)
{
    ft_print_combn(4);
}