#include <stdio.h>

int main() {
    int i, numero, soma = 0;

    for (i = 0; i < 5; i++) {
        printf ("Digite um número:\n");
        scanf("%d", &numero);

        if (numero > 0) {
            soma += numero;
        }
    }
    printf("Soma: %d\n", soma);

    return 0;
}