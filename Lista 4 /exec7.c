#include <stdio.h>

int main() {
    int numero, soma = 0;
    printf ("Digite um número:\n");
    scanf ("%d", &numero);
    
    while (numero != 0) {
        soma += numero;
        
        if (soma > 100) {
            printf ("Ultrapassou 100!");
            break;
        }
        else {
            printf ("Digite mais um número:\n");
            scanf ("%d", &numero);
        }
    }
    
    return 0;
}