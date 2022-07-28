//Função

#include <stdio.h>

float soma (float n1, float n2){
    float resultado;
    resultado= n1+n2;
    return resultado;
}
int main (){
    float n1, n2;
    n1= 12.5;
    n2= 10.0;
    printf ("%.2f\n", soma(10,10));
}

// Outra

#include <stdio.h>

float soma (float n1, float n2){
    float resultado;
    resultado= n1+n2;
    return resultado;
}
int main (){
    float n1, n2;
    n1= 12.5;
    n2= 10.0;
    printf ("%.2f\n", soma(n1,n2));
}

//outra Fibonacci

#include <stdio.h>

void fibo (int n){
    int n1=1, n2=1, p, i; 
    if (n<1) return;
    printf ("%d ", n1);
    for (i=0; i< n-1; i++){
        printf ("%d ", n2);
        p= n1+n2;
        n1=n2;
        n2=p;    
}
    printf ("\n");
}


int main (){
    int num;
    printf ("Digite uma quantidade:\n");
    scanf ("%d", &num);
    fibo (num);
}

// Fibonacci com retorno no main

#include <stdio.h>

int fibo (int n){
    int n1=1, n2=1, p, i, r; 
    if (n<1) return 0;
    r= n1;
    for (i=0; i< n-1; i++){
        r= n2;
        p= n1+n2;
        n1=n2;
        n2=p;    
    }
    return r;
}


int main (){
    int num,r;
    printf ("Digite uma quantidade:\n");
    scanf ("%d", &num);
    r = fibo (num);
    printf ("%d\n", r);
}

// Fatorial

#include <stdio.h>

int fat (int n){
    int prod=1, i;
    if (n==0)
         return 1;
    else if (n<0)
        return -1;
    for (i=n; i>0; i--){
        prod*=i;    
    }
    return prod;
}


int main (){
    int num,prod;
    printf ("Digite uma quantidade:\n");
    scanf ("%d", &num);
    prod = fat (num);
    printf ("%d\n", prod);
}

//Fatorial com a definição

#include <stdio.h>

int fat (int n){
    int prod=1, i;
    if (n==0)
         return 1;
    else if (n<0)
        return -1;
    while (n>0){
        prod*=n;
        n=n-1;    
    }
    return prod;
}


int main (){
    int num,prod;
    printf ("Digite uma quantidade:\n");
    scanf ("%d", &num);
    prod = fat (num);
    printf ("%d\n", prod);
}
