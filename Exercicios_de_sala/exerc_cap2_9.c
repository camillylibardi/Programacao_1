#include <stdio.h>
int main (){
  float atual, nascimento, idade;
  printf ("Digite o ano atual: \n");
  scanf ( "%f", &atual);
  printf ("Digite o ano de nascimento: \n");
  scanf ( "%f", &nascimento);
  idade= atual - nascimento;
    
  if ( nascimento > atual){
	  printf ("Esse ano de nascimento é inválido");
  }
  else
	    printf ("Sua idade é:\n%f", idade);
	

	
}
