#include <stdio.h>



void comprobeNum(char *argv){
    int i;
    i = 0;

    while(argv[1][i] != '\0'){
            printf("%c", argv[1][i]);
            i++;
        }


}




int main(int argc, char **argv){

    


    if ( argc > 3){
        printf("error");
    }else{

        comprobeNum(*argv);

        

    }

}


