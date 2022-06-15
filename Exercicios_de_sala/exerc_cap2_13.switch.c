#include <stdio.h>
int main() {
char nome [50]; 
int nota1, nota2, media;
printf ("Digite o seu nome: \n");
scanf("%s", & nome);
printf ("Digite a nota da prova 1: \n");
scanf ("%d", & nota1);
printf ("Digite a nota da prova 2: \n");
scanf ("%d", & nota2);
media = (nota1 + nota2)/2;

switch (media) {

  case 7 ... 10:
  printf ("Seu nome é %s \n Você tirou %d na primeira prova \n Você tirou %d na segunda prova \n Sua média é %d \n Situação: Aprovado", nome, nota1, nota2, media);
break;
  case 0 ... 3: 
  printf ("Seu nome é %s \n Você tirou %d na primeira prova \n Você tirou %d na segunda prova \n Sua média é %d \n Situação: Reprovado", nome, nota1, nota2, media);
break;
  default:
  printf ("Seu nome é %s \n.Você tirou %d na primeira prova\n.Você tirou %d na segunda prova\n.Sua média é %d \n Situação: Prova final", nome, nota1, nota2, media);
}



  
  
  
  
  
  
  

} 
