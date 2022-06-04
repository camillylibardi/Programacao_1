#include <stdio.h>

int main(void) {
  float seg, segs, ter, ters, qua, quas, qui, quis, sex, sexs, despesas, recebidos, caixas, caixat, caixaq, caixaqu, caixase;
  
  
  //Dados de segunda
  printf("Insira quanto ganhou na segunda-feira:\n");
  scanf("%f", &seg);
  printf("Insira quanto gastou na segunda-feira:\n");
  scanf("%f", &segs);
  caixas= seg- segs;
  
  if (caixas > 2000)
  {
  printf ("Valor recebido de segunda:%f\n",seg);
  printf ("Valor de despesas da segunda:%f\n", segs);
  printf (" O saldo positivo é:%f\n", caixas);
  }
  else if (caixas < -500) 
  {
  printf ("Valor recebido de segunda:%f\n",seg);
  printf ("Valor de despesas da segunda:%f\n", segs);
  printf (" O saldo negativo é:%f\n", caixas);
  }
  
  //Dados de terça
  printf("Insira quanto ganhou na terça-feira:\n");
  scanf("%f", &ter);
  printf("Insira quanto gastou na terça-feira:\n");
  scanf("%f", &ters);
  caixat= ter- ters;
  
  if (caixat > 2000)
  {
  printf ("Valor recebido de terça:%f\n",ter);
  printf ("Valor de despesas da terça:%f\n", ters);
  printf (" O saldo positivo é:%f\n", caixat);
  }
  else if (caixat < -500) 
  {
  printf ("Valor recebido de terça:%f\n",ter);
  printf ("Valor de despesas da terça:%f\n", ters);
  printf (" O saldo negativo é:%f\n", caixat);
  }
  
  //Dados de quarta
  printf("Insira quanto ganhou na quarta-feira:\n");
  scanf("%f", &qua);
  printf("Insira quanto gastou na quarta-feira:\n");
  scanf("%f", &quas);
  caixaq= qua-quas;
  
   if (caixaq > 2000)
  {
  printf ("Valor recebido de quarta:%f\n",qua);
  printf ("Valor de despesas da quarta:%f\n", quas);
  printf (" O saldo positivo é:%f\n", caixaq);
  }
  else if (caixaq < -500) 
  {
  printf ("Valor recebido de quarta:%f\n",qua);
  printf ("Valor de despesas da quarta:%f\n", quas);
  printf (" O saldo negativo é:%f\n", caixaq);
  }
  
  //Dados de quinta
  printf("Insira quanto ganhou na quinta-feira:\n");
  scanf("%f", &qui);
  printf("Insira quanto gastou na quinta-feira:\n");
  scanf("%f", &quis);
  caixaqu= qui-quis;
  
  if (caixaqu > 2000)
  {
  printf ("Valor recebido de quinta:%f\n",qui);
  printf ("Valor de despesas da quinta:%f\n", quis);
  printf (" O saldo positivo é:%f\n", caixaqu);
  }
  else if (caixaqu < -500) 
  {
  printf ("Valor recebido de quinta:%f\n",qui);
  printf ("Valor de despesas da quinta:%f\n", quis);
  printf (" O saldo negativo é:%f\n", caixaqu);
  }
  
  //Dados de sexta
  printf("Insira quanto ganhou na sexta-feira:\n");
  scanf("%f", &sex);
  printf("Insira quanto gastou na sexta-feira:\n");
  scanf("%f", &sexs);
  caixase= sex-sexs;
  
  if (caixase > 2000)
  {
  printf ("Valor recebido de sexta:%f\n",sex);
  printf ("Valor de despesas da sexta:%f\n", sexs);
  printf (" O saldo positivo é:%f\n", caixase);
  }
  else if (caixase < -500) 
  {
  printf ("Valor recebido de sexta:%f\n",sex);
  printf ("Valor de despesas da sexta:%f\n", sexs);
  printf (" O saldo negativo é:%f\n", caixase);
  }
  
  

  return 0;
}
