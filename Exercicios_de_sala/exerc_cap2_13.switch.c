#include <stdio.h>
int main (){
  char nome[50];
  float p1, p2, media;
  printf ("Digite seu nome:\n");
  scanf ("%s", &nome);
  printf ("Digite a note da P1:\n");
  scanf ("%f", &p1);
  printf ("Digite a note da P2:\n");
  scanf ("%f", &p2);
  media = (p1+p2)/2;
  printf ("A media foi: %f\n", media);
  
  
}
