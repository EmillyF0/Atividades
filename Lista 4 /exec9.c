#include <stdio.h>

int main() {
    int i, numero, positivos = 0, negativos = 0, zero = 0;
    
    for (i=0; i<10; i++) {
        printf ("Digite um número:\n");
        scanf ("%d", &numero);
        
        if (numero > 0) {
            positivos++;
        }
        else if (numero < 0) {
            negativos++;
        }
        else {
            zero++;
        }
    }
    printf ("Positivos: %d\n", positivos);
    printf ("Negativos: %d\n", negativos);
    printf ("Zeros: %d\n", zero);
    
    return 0;
}