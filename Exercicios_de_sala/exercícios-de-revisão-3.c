/* Variaveis:
      float t1=0, t2=0, volta, tvolta;
   inicio 
      Para volta==1 ate volta==5
          Leio o tempo da volta em tv
          t1= t1+tv
      Para volta ==1 ate volta==5
          leio o tempo da volta em tv
          t2= t2+tv
   Se  (t1<t2): estudante 1 ganhou
   senao se (t1=t2): empate
   senao : estudante 2 ganhou     
*/

#include <stdio.h> 
int main ()  
  {
    float t1=0, t2=0, volta, tv;
    for (volta=1; volta<=5; volta++)
        {
        scanf ("%f", &tv);
        t1= t1+tv;
        }
    for (volta=1; volta<=5; volta++)
        {
        scanf ("%f", &tv);
        t2= t2+tv;
        }
    if (t1<t2)
    {
    printf ("Estudante 1 ganhou\n");
    }
    else if (t1==t2)
    { 
    printf ("Empate\n");
    }
    else 
    printf ("EStudante 2 ganhou\n");
   }
