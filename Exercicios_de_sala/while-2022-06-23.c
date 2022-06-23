#include <stdio.h> 
int main () {
int i;
i=1;
while (i<=40) {
    if (i % 3 == 0 ||  (i % 7 == 0) || (i % 11 == 0))
printf ("Numero:%d\n", i);
i++;
}
}


#include <stdio.h> 
int main () {
	int i;
	i=1;
	while (i<=40) {
		if (i%3 == 0 && i%2 == 0)
			printf ("Numero:%d\n", i);
	i++;
	}
}


#include <stdio.h> 
int main () {
	int i;
	printf ("Sao divisiveis por 3 e 2:\n");
	i=0;
	do {
	if (i%3 == 0)
	printf ("Numero:%d\n", i);
	i+=2;}
	while (i<= 10); 
}



#include <stdio.h> 
int main () {
	char opcao= 'z';
	while (opcao != 'a'&& opcao != 'b' && opcao != 'c'){
	printf ("Escolha uma opcao:\n");
	printf ("a) 10\n");
	printf ("b) 20\n");
	printf ("c) 30\n");
	scanf ("%c", &opcao);
	}
	printf ("Tua opcao:%c\n", opcao);
}


#include <stdio.h> 
int main () {
	char opcao= 'z';
	do {
	printf ("Escolha uma opcao:\n");
	printf ("a) 10\n");
	printf ("b) 20\n");
	printf ("c) 30\n");
	scanf ("%c", &opcao);
	}
	while (opcao != 'a'&& 
	opcao != 'b' 
	&& opcao != 'c');
	printf ("Tua opcao:%c\n", opcao);
}
