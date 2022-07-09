//Crie um vetor de 30 posições e preencha com valores de 1 a 30. Depois, imprima seus valores na tela.

#include <stdio.h>
int main(){
    int vet[30],i;
    for (i=0; i<30; i++) {
       vet[i]= 1+i;       
}
    for (i=0; i<30; i++) {
       printf("%d\n", vet[i]);
}
}

