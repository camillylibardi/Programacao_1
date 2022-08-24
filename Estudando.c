// produto

#include <stdio.h>
#include <stdlib.h>

 void main()
 {
 int resultado, n1, n2;
 printf ("Digite dois números:\n");
 scanf ("%d %d", &n1, &n2);
 resultado = n1 * n2;
 printf("Resultado: %d\n", resultado);
 }

// antecessor e sucessor

#include <stdio.h>
#include <stdlib.h>

 void main()
 {
 float n, ant, suc;
 printf ("Digite um número:\n");
 scanf ("%f", &n);
 ant= n-1;
 suc= n+1;
 printf("Antecessor: %f e sucessor: %f\n", ant, suc);
 }

// 4 operações

#include <stdio.h>
#include <stdlib.h>

 void main()
 {
 float n1, n2, soma, sub, mult, div;
 printf("Digite o numero 1: ");
 scanf("%f", &n1);
 printf("Digite o numero 2: ");
 scanf("%f", &n2);
 soma = n1 + n2;
 sub = n1 - n2;
 mult = n1 * n2;
 div = n1 / n2;
 printf("\nSoma: %f", soma);
 printf("\nSubtracao: %f", sub);
 printf("\nMultiplicacao: %f", mult);
 printf("\nDivisao: %f", div);
 }

// if e else

#include <stdio.h>
#include <stdlib.h>

int main (){
int n;
printf ("Digite um número:\n");
scanf ("%d", &n);
if (n<20){
  printf ("Resultado:%d\n", n*4);
}
else if (n==20)
  printf ("Resultado:%d\n",n);
else 
printf ("Resultado:%d\n", n*2);
}

// Voluntaroi apto

#include <stdio.h>
#include <stdlib.h>

int main (){
char nome [50];
int idade, resfriado, bemalimentado;
float peso;

printf ("Digite seu nome:\n");
scanf ("%s", &nome);
printf ("Sua idade:\n");
scanf ("%d", &idade);
printf ("Digite seu peso:\n");
scanf ("%f", &peso);
printf ("Você esta resfriado? 1- sim, 0-não:\n");
scanf ("%d", &resfriado);
printf ("Você está bem alimentado? 1-sim, 0-não\n");
scanf ("%d", &bemalimentado);

if (idade >= 16 && idade <=69 && peso >= 50 && resfriado==0 && bemalimentado==1 ){
printf ("O voluntário %s está apto", nome);
}
else
printf ("O voluntário %s não esta apto", nome);
  }

// Peso nos planetas

#include <stdio.h>
#include <stdlib.h>

int main (){
int n;
float pesoterra, pesoplaneta;

printf ("Digite seu peso na Terra\n");
scanf ("%f", &pesoterra);
printf ("1-Mercúrio, 2-Venus, 3-Marte,\n 4-Júpiter, 5-Saturno, 6-Urano\n");
printf ("Digite o numero do planeta:\n");
scanf ("%d", &n);
switch (n){
  case 1:
  pesoplaneta= (pesoterra/10)*0.37;
  break;
  case 2:
  pesoplaneta= (pesoterra/10)*0.88;
  break;
  case 3:
  pesoplaneta= (pesoterra/10)*0.38;
  break;
  case 4:
  pesoplaneta= (pesoterra/10)*2.64;
  break;
  case 5:
  pesoplaneta= (pesoterra/10)*1.15;
  break;
  case 6:
  pesoplaneta= (pesoterra/10)*1.17;
  break;
  default:
  printf("Peso inválido!\n");
  
}
printf ("Peso no planeta:%f", pesoplaneta);
  }
