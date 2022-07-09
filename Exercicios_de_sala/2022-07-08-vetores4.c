/*Crie um vetor, de forma automática, com a seguinte P.A.:
2n+1, onde n = índice do vetor.
Ele deve ser do tipo float e ter 100 posições.*/

#include <stdio.h>
int main(){
    int vet[100],i;
    for (i=0; i<100; i++){
       vet [i]= (2*i)+1;
    }
    for (i=0; i<100; i++){
       printf ("%d\n", vet[i]);
    }
}
    
   
