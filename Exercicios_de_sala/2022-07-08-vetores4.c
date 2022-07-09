/*Crie um vetor, de forma automática, com a seguinte P.A.:
2n+1, onde n = índice do vetor.
Ele deve ser do tipo float e ter 100 posições.
Após isso, imprima os 10 primeiros valores do vetor na tela.*/

#include <stdio.h>
int main(){
    float vet[100],i;
    for (i=0; i<100; i++){
       vet [i]= (2*i)+1;
    }
    for (i=0; i<10; i++){
       printf ("%d\n", vet[i]);
    }
}
    
   
