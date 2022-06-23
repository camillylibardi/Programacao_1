#include <stdio.h> 
int main () {
int i;
for (i=3; i<40; i+=3) {
printf ("Numero:%d\n", i);
}
}


#include <stdio.h> 
int main () {
int i;
for (i=1; i<=40; i++) {
    if (i % 3 == 0 ||  (i % 7 == 0) || (i % 11 == 0))
printf ("Numero:%d\n", i);
}
}

