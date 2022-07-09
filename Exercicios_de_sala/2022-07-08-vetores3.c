//Crie um vetor de 15 posições só com números ímpares.
#include <stdio.h>
int main(){
    int vet[15],i;
    for (i=0; i<15; i++){
       vet [i]= (2*i)+1;
    }
    for (i=0; i<15; i++){
       printf ("%d\n", vet[i]);
    }
}
