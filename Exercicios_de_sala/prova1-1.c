/* Variaveis:
     amg1, amg2, jogada: inteiro
   inicio
     amg1=0
     amg2=0
     jogada=1
     Enquanto jogada==1
        imprima'amg1, qual face tirou?'
        leia jogada
        se jogada==1
           amg1++
     jogada=1
     Enquanto jogada==1
        imprima'amg2, qual face tirou?'
        leia jogada
        se jogada==1
           amg2++
    imprima amigo 1: amg1
    imprima amigo 2: amg2
    se amg1>amg2
      imprima vencedor: amigo 1
    senão se amg2<amg1
      imprima vencedor: amigo 2
    senão 
      imprima empate    
*/


#include <stdio.h> 
int main ()  
  {
    int amg1=0, amg2=0, jogada=1;
    while (jogada==1){
      printf ("amg1, qual face?");
      scanf ("%d", &jogada);
      if (jogada==1)
      amg1++;}
   jogada=1;
   while (jogada==1){
       printf ("amg2, qual face?")
       scanf ("%d", &jogada);
       if (jogada ==1)
       amg2++}
   printf ("amigo 1: %d\n", amg1);
   printf ("amigo 2: %d\n", amg2);
   if (amg1>amg2)
     printf ("Vencedor: amigo 1\n");
   else if (amg1<amg2)
     printf ("Vencedor: amigo 2\n");
   else 
    printf ("Empate\n");
}
