#include <stdio.h>

int main() {
    int i, numero, maiores = 0;
    
    for (i=0; i<10; i++) {
        printf ("Digite um número:\n");
        scanf ("%d", &numero);
        
        if (numero > 50) {
            maiores++;
        }
    }
    printf ("Quantidade: %d\n", maiores);

    return 0;
}