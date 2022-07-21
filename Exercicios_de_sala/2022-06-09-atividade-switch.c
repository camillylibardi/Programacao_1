#include <stdio.h> 
int main (){
char letra;
scanf ("%c", &letra);
switch (letra) 
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
printf("Isso é uma vogal\n");
break;

case 'b':
case 'c':
case 'd':
case 'f': 
case 'g':
case 'h':
case 'j':
case 'k':
case 'l':
case 'm':
case 'n':
case 'p':
case 'q':
case 'r':
case 's':
case 't':
case 'v':
case 'w':
case 'x':
case 'y':
case 'z':
printf ("Isso é uma consoante\n");
break;

default : 
printf ("Isso nao é letra\n");
}
}
