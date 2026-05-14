#include <stdio.h>

int main() {
    int numeros[10];
    int i;
    
    for (i=0;i<10;i++) {
        printf ("Digite o número %d°:\n", i);
        scanf ("%d", &numeros[i]);
    }
    for (i=0;i<10;i++) {
        if (numeros[i] < 0) {
            numeros [i] = 0;
        }
        printf ("Números: %d\n", numeros[i]);
    }
    
    return 0;
}