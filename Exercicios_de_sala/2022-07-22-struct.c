#include <stdio.h>

struct pessoa {
    char nome[20];
    int idade;
};

int main (){
    struct pessoa var1={"Camilly", 19};
    printf ("Nome: %s\nIdade: %d\n", var1.nome, var1.idade);
}

// outra com scanf

#include <stdio.h>

struct pessoa {
    char nome[20];
    int idade;
};

int main (){
    struct pessoa var1;
    printf ("Digite seu nome:\n");
    scanf ("%s", var1.nome);
    printf ("Digite sua idade:\n");
    scanf ("%d", &var1.idade);
    printf ("Seu nome é:%s.\nSua idade é:%d\n",var1.nome, var1.idade);
    
}


// outra com typedef

#include <stdio.h>

typedef struct{
        char nome[20];
        int idade;
}pessoa;

int main (){
    pessoa var1;
    printf ("Digite seu nome:\n");
    scanf ("%s", var1.nome);
    printf ("Digite sua idade:\n");
    scanf ("%d", &var1.idade);
    printf ("Seu nome é:%s.\nSua idade é:%d anos\n",var1.nome, var1.idade);
    
}

// outra aluno sem vetor
#include <stdio.h>

typedef struct{
        char nome[20];
        int idade;
        float nota;
}tipo_aluno;

int main (){
    tipo_aluno aluno;
    printf ("Digite seu nome:\n");
    scanf ("%s", aluno.nome);
    printf ("Digite sua idade:\n");
    scanf ("%d", &aluno.idade);
    printf ("Digite sua nota:\n");
    scanf ("%f", &aluno.nota);
    
    printf ("Seu nome é:%s.\nSua idade é:%d anos\nSua nota:%.2f",aluno.nome, aluno.idade, aluno.nota);
    
}

//outra com vetor

#include <stdio.h>

typedef struct{
        char nome[20];
        int idade;
        float nota;
}tipo_aluno;

int main (){
    tipo_aluno aluno[3];
    printf ("Digite seu nome:\n");
    scanf ("%s", aluno[0].nome);
    printf ("Digite sua idade:\n");
    scanf ("%d", &aluno[0].idade);
    printf ("Digite sua nota:\n");
    scanf ("%f", &aluno[0].nota);
    printf ("Seu nome é:%s.\nSua idade é:%d anos\nSua nota:%.2f\n",aluno[0].nome, aluno[0].idade, aluno[0].nota);

    printf ("Digite seu nome:\n");
    scanf ("%s", aluno[1].nome);
    printf ("Digite sua idade:\n");
    scanf ("%d", &aluno[1].idade);
    printf ("Digite sua nota:\n");
    scanf ("%f", &aluno[1].nota);
    printf ("Seu nome é:%s.\nSua idade é:%d anos\nSua nota:%.2f\n",aluno[1].nome, aluno[1].idade, aluno[1].nota);

    printf ("Digite seu nome:\n");
    scanf ("%s", aluno[2].nome);
    printf ("Digite sua idade:\n");
    scanf ("%d", &aluno[2].idade);
    printf ("Digite sua nota:\n");
    scanf ("%f", &aluno[2].nota);
    printf ("Seu nome é:%s.\nSua idade é:%d anos\nSua nota:%.2f\n",aluno[2].nome, aluno[2].idade, aluno[2].nota);
    
}

//vetor com for

#include <stdio.h>

typedef struct{
        char nome[20];
        int idade;
        float nota;
}tipo_aluno;

int main (){
    tipo_aluno aluno[3];
    int i;
    for (i=0; i<3; i++){
        printf ("Nome %d:\n", i);
        scanf ("%s", aluno[i].nome);  
        printf ("Idade %d:\n", i);
        scanf ("%d", &aluno[i].idade); 
        printf ("Nota %d:\n", i);
        scanf ("%f", &aluno[i].nota); 
    }
    for (i=0; i<3; i++){
        printf ("Nome %d:%s\n",i, aluno[i].nome);
        printf ("Idade %d:%d\n",i, aluno[i].idade);
        printf ("Nota %d:%f\n",i, aluno[i].nota);
    }
   
    
}

//outra 
