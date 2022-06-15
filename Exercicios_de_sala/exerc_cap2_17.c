#include <stdio.h>
int main() {
char nome [30];
int idade;
printf ("Escreva seu nome: \n");
scanf ("%s", & nome);
printf ("Escreva sua idade: \n");
scanf ("%d",  & idade);
switch (idade) {
 /* dúvida: e se a pessoa digitar uma idade inválida.Como resolver?
  */ 
  case 0 ... 10:
  printf ("Seu nome é %s e o valor pago será R$ 30,00 \n", nome);
  break;
  case 11 ... 29: 
  printf ("Seu nome é %s e o valor pago será R$ 60,00 \n", nome);
  break;
  case 30 ... 45:
  printf ("Seu nome é %s e o valor pago será R$ 120,00 \n", nome);
  break;
  case 46 ... 59:
  printf ("Seu nome é %s e o valor pago será R$ 150,00 \n", nome);
  break;
  case 60 ... 65:
  printf ("Seu nome é %s e o valor pago será R$ 250,00 \n", nome);
  break;
  default: 
    printf("Seu nome é %s e o valor pago será R$ 400,00 \n", nome);
  
}
  

}
