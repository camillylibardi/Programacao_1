//escreva todos os números dessa matriz na tela

#include <stdio.h>
#include <stdlib.h>

int main() {
    int mat[10][10], lin, col, num_impar[10]={0,0,0,0,0,0,0,0,0,0}, i;
    
    for (lin=0; lin<10; lin++){
        for (col=0; col<10; col++){
            mat[lin][col]= rand()%1000;
        }
    }
    for (lin=0; lin<10; lin++){
        for (col=0; col<10; col++){
            if (mat[lin][col]%2==1)
                num_impar[col]++;
        }
    }
    for (i=0; i<10; i++){
        printf ("coluna %d:",i);
        printf ("%d\n", num_impar[i]);
    }
}


//informe quantos números ímpares tem em cada coluna


