// primeira

#include <stdio.h>

void teste (int num){
    num=10;
}

int main (){
    int num=7;
    printf ("%p\n", &num);
}

// outra na função

#include <stdio.h>

void teste (int num){
    printf ("F:%p\n", &num);
    num=10;
}

int main (){
    int num=7;
    printf ("%p\n", &num);
    teste (num);
}

//outra

#include <stdio.h>

void teste (int num){
    printf ("F:%p\n", &num);
    num=10;
}

int main (){
    int num=7;
    printf ("%p\n", &num);
    teste (num);
    printf ("%d\n", num);
}

// outra pra mudar agr

#include <stdio.h>

void teste (int *num){
    printf ("F:%p\n", num);
    *num=10;
}

int main (){
    int num=7;
    printf ("%p\n", &num);
    teste (&num);
    printf ("%d\n", num);
}


//outra


#include <stdio.h>

void teste (int *num){
    printf ("E:%p\n", &num);
    printf ("F:%p\n", num);
}

int main (){
    int num=7;
    printf ("%p\n", &num);
    teste (&num);
    printf ("%d\n", num);
}

//outra

#include <stdio.h>
#include <stdlib.h>

int main(){
    float *num;
    num= malloc (sizeof(float));
    *num=20;
    printf ("%f\n", *num);
}

//outra com idade scanf

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *idade;
    idade= malloc (sizeof(int));
    printf ("Escreva sua idade:\n");
    scanf ("%d", idade);
    printf ("Sua idade é: %d\n", *idade);
}

// outra com scanf e endereço

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *idade;
    idade= malloc (sizeof(int));
    printf ("Escreva sua idade:\n");
    scanf ("%d", idade);
    printf ("Endereço é: %p\n", idade);
    printf ("Sua idade é: %d\n", *idade);
}



