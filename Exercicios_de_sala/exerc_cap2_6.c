#include <stdio.h>
int main (){
  float sal, prest, cred; 
  printf ("Digite seu salário: \n");
  scanf ( "%f", &sal);
  printf ( "Digite o valor da prestação:\n");
  scanf ("%f", &prest);  
  cred= sal*0,3;
    
  if ( cred >= prest ){
	  printf ("Seu empréstimo pode ser concedido");
  }
  else 
	    printf ("Seu empréstimo não pode ser concedido");
	
