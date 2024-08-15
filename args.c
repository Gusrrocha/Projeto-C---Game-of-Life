#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(int argc, char *argv[]){
    int soma=0, x=0, y=0;
    x = atoi(argv[1]);
    y = atoi(argv[2]);
    printf("Os numeros que voce inseriu foram respectivamente: %d e %d\n",x,y);
    
    soma = x+y;
    printf("E a soma deles: %d", x+y);
    return 0;
}