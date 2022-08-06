// imc sem scanf 

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float peso, altura;
}tipoIMC;

int main (){
    tipoIMC *imc;
    imc= malloc (sizeof(tipoIMC));
    imc -> peso= 63;
    printf ("%f\n", imc ->peso);
}

// imc com scanf 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    float peso, altura;
}tipoIMC;

int main (){
    tipoIMC *imc;
    imc= malloc (sizeof(tipoIMC));
    printf ("Digite seu peso:\n");
    scanf ("%f", &imc->peso);
    printf ("Digite sua altura:\n");
    scanf ("%f", &imc->altura);
    
    printf ("Seu peso:%.2f\nSua altura: %.2f\nSeu imc é: %.2f\n", imc ->peso, imc ->altura, imc->peso/pow(imc->altura,2));
}

// imc como função 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    float peso, altura;
}tipoIMC;

void calc_imc (tipoIMC imc){
    float resultado;
    resultado= imc.peso/ pow(imc.altura,2);
    printf ("Seu IMC é:\n%.2f\n", resultado);
}
int main (){
    tipoIMC *imc;
    imc= malloc (sizeof(tipoIMC));
    printf ("Digite seu peso:\n");
    scanf ("%f", &imc->peso);
    printf ("Digite sua altura:\n");
    scanf ("%f", &imc->altura);
    calc_imc (*imc);
}


// imc como função recebendo ponteiro

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    float peso, altura;
}tipoIMC;

void calc_imc (tipoIMC *imc){
    float resultado;
    resultado= imc->peso/ pow(imc->altura,2);
    printf ("Seu IMC é:\n%.2f\n", resultado);
}
int main (){
    tipoIMC *imc;
    imc= malloc (sizeof(tipoIMC));
    printf ("Digite seu peso:\n");
    scanf ("%f", &imc->peso);
    printf ("Digite sua altura:\n");
    scanf ("%f", &imc->altura);
    calc_imc (imc);
}


// com variavel resultado

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    float peso, altura;
}tipoIMC;

float calc_imc (tipoIMC imc){
    float resultado;
    resultado= imc.peso/ pow(imc.altura,2);
    return resultado;
}
int main (){
    tipoIMC *imc;
    float resultado;
    imc= malloc (sizeof(tipoIMC));
    printf ("Digite seu peso:\n");
    scanf ("%f", &imc->peso);
    printf ("Digite sua altura:\n");
    scanf ("%f", &imc->altura);
    resultado= calc_imc (*imc);
    printf ("%f\n", resultado);
}


// com vetor

#include <stdio.h>
#include <stdlib.h>

float soma (float *v, int tam){
      int i;
      float r=0;
      for (i=0; i< tam; i++)
        r+=v[i];
      return r;
}
int main (){
      float *vet;
      int t, i;
      printf("Escolha um tamanho pro seu vetor:\n");
      scanf ("%d", &t);
      vet= malloc (t*sizeof(float));
      for (i=0; i<t; i++)
        vet[i]= i*i+3;
      printf ("%.2f\n", soma (vet,t));
}

// com dois vetores

#include <stdio.h>
#include <stdlib.h>

float soma (float *v, int tam){
      int i;
      float r=0;
      for (i=0; i< tam; i++)
        r+=v[i];
      return r;
}
int main (){
      float *vet;
      int t, i;
      printf("Escolha um tamanho pro seu vetor:\n");
      scanf ("%d", &t);
      vet= malloc (t*sizeof(float));
      for (i=0; i<t; i++)
        vet[i]= i*i+3;
      printf ("%.2f\n", soma (vet,t));

      for (i=0; i<t; i++)
        vet[i]= i*i;
      printf ("%.2f\n", soma (vet,t));
   
}
