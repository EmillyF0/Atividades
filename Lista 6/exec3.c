#include <stdio.h>

int main() {
    int numeros[10];
    int i, maior;
    
    for (i=0;i<10;i++) {
        printf ("Digite o número %d°:\n", i);
        scanf ("%d", &numeros[i]);
    }
    maior = numeros[0];
    for (i=0;i<10;i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }
    
    printf ("Maior valor = %d\n", maior);
    
    return 0;
}