/* Variaveis:
    int N,M, vez=0;
   Inicio
    Ler valor de N e M
    EScrever total N na tela
    Enquanto meu valor de N>0:
        Se vez==0:
           EScreve 'Paula  -'
           vez 1
        Senao
           Escrev 'Carlos -'
           vez 0
        N-=M 
        Se N<0:
          Imprime 0
        Senao 
          Imprime N
    Se vez==0: 
      Imprime Carlos ganhou
    Senão 
      Imprime Paula gahou.
*/


#include <stdio.h> 
int main () {
    int N, M, vez=0;
    printf ("EScreva a quantidade de bolinhas de chocolate:\n");
    scanf ("%d",&N);
    printf ("EScreva a quantidade de bolinhas de chocolate que foi sorteada:\n");
    scanf ("%d",&M);
    while (N>0){
        if (vez==0){
            printf ("Paula -  ");
            vez=1;
        }else{
            printf ("Carlos -  ");
            vez=0;
        }
        N=N-M;
        if (N<0)
           printf ("0\n");
        else 
           printf ("%d\n",N);
    }
    if (vez==0)
           printf ("Carlos ganhou\n");
    else 
           printf ("Paula ganhou\n");
      
}
