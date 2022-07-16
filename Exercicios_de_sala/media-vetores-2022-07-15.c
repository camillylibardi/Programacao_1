#include <stdio.h>
int main() {
 float notas[6][8], media[6], soma;
 char nomes[6][20];
 int i, j;
 for (i=0;i<6;i++) {
 printf("Digite o nome do aluno %d: ", i);
 scanf("%s", nomes[i]);
 }
 for (i=0;i<6;i++)
 for (j=0;j<8;j++) {
 printf("Digite a nota do aluno %s na disciplina %d: ", nomes[i], j);
 scanf("%f", &notas[i][j]);
 }
 // vamos somar as notas dos alunos:
 for (i=0;i<6;i++) {
 soma = 0;
 for (j=0;j<8;j++) {
 soma += notas[i][j];
 }
 media[i] = soma/8;
 }
 // média das médias:
 soma = 0;
 for (i=0;i<6;i++)
 soma += media[i];
 // Sumário:
 for (i=0;i<6;i++)
 printf("Média do aluno %d - %s: %.2f\n",
 i, nomes[i], media[i]);
 printf("Média da turma: %.2f\n", soma/6);
}
