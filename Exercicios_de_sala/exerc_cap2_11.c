#include <stdio.h>
int main (){
  float num1, num2, num3; 
  printf ("Digite um número\n");
  scanf ( "%f", &num1);
  printf ("Digite um número\n");
  scanf ( "%f", &num2);
  printf ("Digite um número\n");
  scanf ( "%f", &num3);
  
    
  if ( num1> num2 && num2>num3){
	  printf ("O maior e o: %f", num1);
  }
  else if ( num2 > num1 && num1> num3){
	    printf ("O maior e o: %f", num2);
  }
  else if (num3 > num2 && num2 > num1) {
	  printf ("O maior e o: %f", num3);
  }
  else if (num2> num3 && num3 > num1) { 
  printf ("O maior e o: %f", num2);
  }
  else if (num3 > num1 && num1 > num2){
	  printf ("O maior e o: %f", num3);
  }
  else
	  printf ("O maior e o: %f", num1);
	

	
}
