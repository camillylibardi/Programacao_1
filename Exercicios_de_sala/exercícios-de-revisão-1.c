/* Variáveis:
   int A,B,C,D
 Início:
   ler A,B,C,D
  Se A= B+C+D e B= C e D= B+C:
      Escrever: Esta equilibrado.
  Senão
      Escrever: Nao esta equilibardo.
*/


#include <stdio.h> 
int main () {
float A,B,C,D;
A= B+C+D;
B= C;
D= B+C; 

    printf ("EScreva um valor:\n");
    scanf ("%f",&A);
    printf ("EScreva um valor:\n");
    scanf ("%f",&B);
    printf ("EScreva um valor:\n");
    scanf ("%f",&C);
    printf ("EScreva um valor:\n");
    scanf ("%f",&D);

if (A== B+C+D && B== C && D== B+C ) {
   printf ("Está equiilibrado!");
}
	else 
    printf ("Não está equiilibrado!");
}
