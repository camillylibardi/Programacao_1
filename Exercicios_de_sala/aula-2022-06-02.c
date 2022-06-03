#include <stdio.h>

int main(void) {
  float seg, segs, ter, ters, qua, quas, qui, quis, sex, sexs, despesas, recebidos, caixa;

  printf("Insira quanto ganhou na segunda-feira:\n");
scanf("%f", &seg);
printf("Insira quanto gastou na segunda-feira:\n");
scanf("%f", &segs);
printf("Insira quanto ganhou na terça-feira:\n");
scanf("%f", &ter);
printf("Insira quanto gastou na terça-feira:\n");
scanf("%f", &ters);
printf("Insira quanto ganhou na quarta-feira:\n");
scanf("%f", &qua);
printf("Insira quanto gastou na quarta-feira:\n");
scanf("%f", &quas);
printf("Insira quanto ganhou na quinta-feira:\n");
scanf("%f", &qui);
printf("Insira quanto gastou na quinta-feira:\n");
scanf("%f", &quis);
printf("Insira quanto ganhou na sexta-feira:\n");
scanf("%f", &sex);
printf("Insira quanto gastou na sexta-feira:\n");
scanf("%f", &sexs);

despesas=segs+ters+quas+quis+sexs;
  printf("Você teve um total de saídas igual a:%f\n", despesas);
  
recebidos=seg+ter+qua+qui+sex;
printf("Nessa semana a quantia que você recebeu é igual a:%f\n", recebidos);
  
  caixa=recebidos-despesas;
  printf("Nesta semana seu saldo foi de:%f\n", caixa);

if (caixa >= 2000)
  printf("Seu saldo é positivo!!!");
  else if (caixa<=2000 && caixa >=-500)
    printf("Seu saldo está okay!!!");
else (caixa<= -500);
printf("Seu saldo é negativo");

  return 0;
}
