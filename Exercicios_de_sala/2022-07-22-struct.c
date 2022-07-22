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
    
}
