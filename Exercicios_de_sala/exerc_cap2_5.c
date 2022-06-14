#include <stdio.h>
int main (){
  int num, result3, rest3, rest7, result7;
  printf ("Digite um número: \n");
  scanf ( "%d", &num);
  result3 = num/3;
  result7 = num/7;
  rest3 = num - result3*3;
  rest7 = num - result7*7;  
  
  if (rest3 == 0 && rest7 == 0 ){
	  printf ("Seu numero é divisivel por 3 e 7!");
  }
  else if (rest3 == 0){
	  printf ("Seu numero é divisivel por 3!");
  }
  else if (rest7== 0) {
	    printf ("Seu numero é divisivel por 7!");
  }
  
  else 
	    printf ("Seu numero não é divisivel nem por 3, nem por 7!");
	

	
}

