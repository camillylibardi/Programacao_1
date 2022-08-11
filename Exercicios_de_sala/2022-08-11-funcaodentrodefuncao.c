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

// par ou impar

#include <stdio.h>
#include <stdlib.h>

int p_impar (int vet[5], int pos){
   if (0<= pos && pos >5){
        if ( (vet[pos]%2) == 1){
            return 1;}
        else {
            return 0;}
    }else {
        return 0;}
     
}
int main (){
    int v[5], resp;
    resp= p_impar (v, 0);
    printf ("Resp: %s\n", (resp==1)? "sim":"nao");
}

// par ou impar com a função

#include <stdio.h>
#include <stdlib.h>

int p_impar (int vet[5], int pos){
   if (0<= pos && pos <5){
        if ( (vet[pos]%2) == 1){
            return 1;}
        else {
            return p_impar (vet, pos+1);}
    }else {
        return 0;}
     
}
int main (){
    int v[5]= {2, 4, 6, 1, 7}, resp;
    resp= p_impar (v, 0);
    printf ("Resp: %s\n", (resp==1)? "sim":"nao");
}
