//Crie um vetor de 20 posições e preencha com múltiplos de 2, sendo cada posição com valor 2*seu índice

#include <stdio.h>
int main(){
    int vet[20],i;
    for (i=0; i<20; i++){
       vet [i]= 2*i;
    }
    for (i=0; i<20; i++){
       printf ("%d\n", vet[i]);
    }
}
    
    
