#include <stdio.h>

int main() {
    int numeros[10], valor, encontrado = 0;
    int i;
    
    for (i=0;i<10;i++) {
        printf ("Digite o número %d°:\n", i);
        scanf ("%d", &numeros[i]);
    }
    
    printf ("Digite o valor a buscar:\n");
    scanf ("%d", &valor);
    
    for (i=0;i<10;i++) {
        if (numeros[i] == valor) {
            encontrado = 1;
        }
    }
    
    if (encontrado) {
        printf ("Valor encontrado!");
    }
    else {
        printf ("Valor não encontrado!");
    }

    return 0;
}