// primeiro exemplo.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
    printf ("Estou apontando para %p\n", p);
}

// Forçando erro

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
    printf ("Estou apontando para %p\n", p);
    *p= 10;
}


// Espaço de memória pro """erro""".

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
    printf ("Estou apontando para %p\n", p);
    printf ("Tamanho de um inteiro: %ld\n", sizeof(int));
    p= malloc(4);
    printf ("Estou apontando para %p\n", p);
}

// sizeof dentro do malloc

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
    printf ("Estou apontando para %p\n", p);
    printf ("Tamanho de um inteiro: %ld\n", sizeof(int));
    p= malloc(sizeof(int));
    printf ("Estou apontando para %p\n", p);
}

// ou

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
    printf ("Estou apontando para %p\n", p);
   // printf ("Tamanho de um inteiro: %ld\n", sizeof(int));
    p= malloc(sizeof(int));
    printf ("Estou apontando para %p\n", p);
}

// valor para *p

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
    printf ("Estou apontando para %p\n", p);
   // printf ("Tamanho de um inteiro: %ld\n", sizeof(int));
    p= malloc(sizeof(int));
    printf ("Estou apontando para %p\n", p);
    *p=10;
    printf ("Valor de *p:%d\n", *p);
}

// com scanf

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
    printf ("Estou apontando para %p\n", p);
   // printf ("Tamanho de um inteiro: %ld\n", sizeof(int));
    p= malloc(sizeof(int));
    printf ("Estou apontando para %p\n", p);
    scanf ("%d",p);
    printf ("Valor de *p:%d\n", *p);
}

// Soma

#include <stdio.h>
#include <stdlib.h>

int main(){
    float *num1, *num2, *soma;
    num1= malloc(sizeof(float));
    printf ("Digite um número:\n");
    scanf ("%f", num1);
    
    num2= malloc(sizeof(float));
    printf ("Digite um número:\n");
    scanf ("%f", num2);
    
    soma= malloc(sizeof(float));
    *soma= *num1+ *num2;
    printf("A soma é:\n %.2f\n", *soma);
}

//Com vetor PPPRRRROOOVVVVAAAAA

#include <stdio.h>
#include <stdlib.h>

int main(){
    int vet[3], i, soma=0;
    float media;
    for (i=0; i<3; i++){
        printf ("Digite um valor:");
        scanf ("%d", &vet[i]); 
        }
    for (i=0; i<3; i++){
        soma = soma + vet[i];
        }
    media= soma/3;
    printf ("media: %f\n", media);
}

//COM VETOR PROVA 2 

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vet, i, soma=0;
    float media;
    vet= malloc(3*sizeof (int));
    for (i=0; i<3; i++){
        printf ("Digite um valor:");
        scanf ("%d", &vet[i]); 
        }
    for (i=0; i<3; i++){
        soma = soma + vet[i];
        }
    media= soma/3;
    printf ("media: %f\n", media);
}

// SOMA SENDO PONTEIRO

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vet, i, *soma;
    float media;
    vet= malloc(3*sizeof (int));
    soma= malloc (sizeof(int));
        *soma=0;
    for (i=0; i<3; i++){
        printf ("Digite um valor:");
        scanf ("%d", &vet[i]); 
        }
    for (i=0; i<3; i++){
        *soma = *soma + vet[i];
        }
    media= *soma/3;
    printf ("media: %f\n", media);
}

// I SENDO PONTEIRO

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vet, *i, *soma;
    float media;
    vet= malloc(3*sizeof (int));
    i= malloc (sizeof(int));
    soma= malloc (sizeof(int));
        *soma=0;
    for (*i=0; *i<3; (*i)++){
        printf ("Digite um valor:");
        scanf ("%d", &vet[*i]); 
        }
    for (*i=0; *i<3; (*i)++){
        *soma = *soma + vet[*i];
        }
    media= *soma/3;
    printf ("media: %f\n", media);
}

//NOTAS PODE SER PROOOVVVAAA

#include <stdio.h>
#include <stdlib.h>

float media_notas (int n){
    float *notas, media;
    int i;
    notas = malloc (n*sizeof(float));
    for (i=0; i<n; i++){
        printf ("Aluno %d:\n", i);
        scanf ("%f", &notas[i]);
        }
    media= 1;
    for (i=0; i<n; i++){
        media += notas[i];
        }
    media=media/n;
    return media;
}

int main (){
    float m;
    m= media_notas(3);
    printf ("media:%.2f\n",m);
}
    
