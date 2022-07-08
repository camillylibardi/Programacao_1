#include <stdio.h>
int main(){
float nota[5];
int i;
for (i=0;i<5;i++) {
 printf("Digite a nota do aluno %d: ", i);
 scanf("%f", &nota[i]);
}
for (i=0; i<5; i++){
 printf ("As notas dos alunos %d foram:%f\n",i, nota[i]);

}
}
