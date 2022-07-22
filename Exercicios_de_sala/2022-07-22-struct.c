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
