#include <stdio.h>

int main() {
    int numero, total = 0, positivos = 0;
    printf ("Digite um número:\n");
    scanf ("%d", &numero);
    
    while (numero != 0) {
        total++;
        printf ("Digite o número novamente:\n");
        scanf ("%d", &numero);
        
        if (numero > 0) {
            positivos++;
        }
    }
    printf ("Total: %d\n", total);
    printf ("Positivos: %d\n", positivos);
    

    return 0;
}