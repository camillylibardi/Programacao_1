#include <stdio.h>
#include <stdlib.h>

int main( ) 
{
  int saldo;
  printf ("Digite o saldo:\n");
  scanf ("%d", &saldo);

  switch (abs(saldo)){
    case 0 ... 500:
    printf ("Nenhum credito\n");
    break;
    case 501 ... 1000:
    printf ("Saldo: %d e credito: %f\n", saldo, saldo*0.3);
    break;
    case 1001 ... 3000: 
    printf ("Saldo: %d e Credito: %f\n",saldo, saldo*0.4);
    break;
    default:
    printf ("Saldo: %d e credito: %f", saldo, saldo*0.5);
    
  }
    
}
