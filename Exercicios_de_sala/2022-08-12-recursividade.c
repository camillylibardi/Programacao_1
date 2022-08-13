// com string.h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imp (char vet[16], int pos){
    if (vet [pos]== '\0'){
        printf ("\n");
}else{
        printf ("%c", vet[pos]);
        imp (vet, pos+1);
}
}

int main (){
    char v[16];
    strcpy (v, "Camilly Eduarda");
    imp (v,0);
}

// nome ao contrario

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imp (char vet[16], int pos){
    if (vet [pos]== '\0'){
        printf ("\n");
}else{
        imp (vet, pos+1);
        printf ("%c", vet[pos]);
}
}

int main (){
    char v[16];
    strcpy (v, "Camilly Eduarda");
    imp (v,0);
}

// posição par

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imp (char vet[16], int pos){
    if (vet [pos]== '\0'){
        printf ("\n");
}else{
        if  (pos%2==0)
        printf ("%c", vet[pos]);
        imp (vet, pos+1);
}
}

int main (){
    char v[16];
    strcpy (v, "Camilly Eduarda");
    imp (v,0);
}

// numero binario

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void binario (int num){
    if (num/2 == 0){
        printf ("binario:%d", num%2);
}else{
        if  (num/2 != 0)
        binario (num/2);
        printf ("%d", num%2);
}
}

int main (){
    int num;
    binario (10);
    printf ("\n");
    
}

// binário com o numero que a pessoa quiser

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void binario (int num){
    if (num/2 == 0){
        printf ("binario:%d", num%2);
}else{
        if  (num/2 != 0)
        binario (num/2);
        printf ("%d", num%2);
}
}

int main (){
    int num;
    printf ("Escreva um número:\n");
    scanf ("%d", &num);
    binario (num);
    printf ("\n");
    
}

// numero 10 binario em c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (){
    printf ("%d\n", 0b1010);
    
}

// Fatorial 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fat (int num){
    if (num == 1){
        return 1;
}else{
        return num*fat(num-1);
}
}

int main (){
    int num;
    printf ("Digite um numero:\n");
    scanf ("%d", &num);
    printf ("Resultado:%d\n", fat (num));
    
}
