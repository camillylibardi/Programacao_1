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

//outra
