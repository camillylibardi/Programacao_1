#include <stdio.h>
int main() {
    char nome [30]; 
    float p1, p2, media;
    printf("Insira seu nome:\n ");
    scanf ("%s", & nome);
    printf ("Insira a nota da primeira prova: \n");
    scanf ("%f", & p1);
    printf("Insira a nota da segunda prova: \n");
    scanf ("%f", & p2);
    media = (p1 + p2)/2;
    printf("A média é: %.1f \n" ,media);
    if (media >= 7) {
        printf ("Seu nome é %s \n Você tirou %.1f na primeira prova \n Você tirou %.1f na segunda prova \n Sua média é %.1f \n Situação: Aprovado", nome, p1, p2, media);
    }
    else if (media < 3) {
        printf ("Seu nome é %s \n Você tirou %.1f na primeira prova \n Você tirou %.1f na segunda prova \n Sua média é %.1f \n Situação: Reprovado", nome, p1, p2, media);
    }
    else 
        printf ("Seu nome é %s \n Você tirou %.1f na primeira prova \n Você tirou %.1f na segunda prova \n Sua média é %.1f \n Situação: Em prova final", nome, p1, p2, media);
   

}
