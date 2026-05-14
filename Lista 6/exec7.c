#include <stdio.h>

int main() {
    int numeros[8];
    int i;
    
    for (i=0;i<8;i++) {
        printf ("Digite o número %d°:\n", i);
        scanf ("%d", &numeros[i]);
    }
    for (i=7;i>0;i--) {
        printf ("Número: %d\n", i);
    }

    return 0;
}