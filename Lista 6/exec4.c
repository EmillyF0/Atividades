#include <stdio.h>

int main() {
    int numeros[12];
    int i, pares = 0;
    
    for (i=0; i<12;i++) {
        printf ("Digite o número %d°:\n", i);
        scanf ("%d", &numeros[i]);
        
        if (numeros[i] % 2 == 0) {
            pares++;
        }
    }
    
    printf ("Quantidade de pares: %d\n", pares);

    return 0;
}