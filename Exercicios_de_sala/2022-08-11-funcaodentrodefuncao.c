#include <stdio.h>
#include <stdlib.h>

float csoma (float vet[10]);
float cmedia (float vet[10]){
      float soma;
      soma= csoma (vet);
      return soma/10;
}
float csoma (float vet[10]){
      int i;
      float s=0;
      for (i=0; i<10; i++)
           s+=vet[i];
      return s;     
}

//outra para colocar em ordem decrescente 

#include <stdio.h>
#include <stdlib.h>

void esc_num (int num){
    printf ("Número:%d\n", num);
    if (num>0)
        esc_num (num-1);
}
int main (){
    esc_num (10);
}

// 
