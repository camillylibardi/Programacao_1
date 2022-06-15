#include <stdio.h>
int main() {
int idade;
  printf ("Digite a idade do nadador: \n");
  scanf ("%d", & idade);
  switch (idade) {
    case 0 ... 4: 
    printf ("Idade menor do que a exigida para participação");
   break;
    case 5 ... 7: 
    printf ("Categoria Infantil A");
   break;
    case 8 ... 10:
    printf ("Categoria Infantil B");
   break;
    case 11 ... 13:
    printf ("Categoria Juvenil A");
   break;
    case 14 ... 17:
    printf ("Categoria Juvenil B");
   break;
    default:
    printf ("Categoria Sênior");
  
    } 
  

}
