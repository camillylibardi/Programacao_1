//escreva todos os números dessa matriz na tela
#include <stdio.h>
int main ()
{
int matriz [10][10]; 
int i, j;
srand(time (NULL));
for (i=0; i<10; i++){
  for (j=0;j<10; j++){
    matriz[i][j] = rand()%100;
    }
  }
for (i=0; i<10; i++){
  for (j=0;j<10; j++){
    printf ("%d", matriz[i][j]);
    printf ("   ");
    }
    printf("\n");
  }
 
}

//informe quantos números ímpares tem em cada coluna


