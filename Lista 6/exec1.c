#include <stdio.h>

int main() {
    int numeros[10];
    int i;
    
    for (i=0; i<10; i++) {
        printf ("Digite o número da posição %d:\n", i);
        scanf ("%d", &numeros[i]);
    } 
    printf ("Valores digitados:\n");
    for (i=0; i<10; i++) {
        printf ("Números %d: %d\n", i, numeros[i]);
    }

    return 0;
}