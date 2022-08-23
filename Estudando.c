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

