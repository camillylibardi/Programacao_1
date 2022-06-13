#include <stdio.h>
int main (){
  float num, div3, div7;
  printf ("Digite um número: \n");
  scanf ( "%f", &num);
  
  div3= num/3;
  div7= num/7;
  
  if (div3 == 0){
	  printf ("Seu numero é divisivel por 3!");
  }
  else if (div7 == 0) {
	    printf ("Seu numero é divisivel por 7!");
  }
  else if (div3 == 0 && div7 == 0){
	  printf ("Seu numero é divisivel por 3 e 7!");
  }
  else 
	    printf ("Seu numero não é divisivel nem por 3, nem por 7!");
}
