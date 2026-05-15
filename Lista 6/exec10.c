#include <stdio.h>

int main() {
    float vendas[7], maior;
    int i, Diamaior = 0;
    
    for (i=1;i<8;i++) {
        printf ("Valor do %d° dia:\n", i);
        scanf ("%f", &vendas[i]);
    }
    maior = vendas[0];
    for (i=1;i<8;i++) {
        if (vendas[i] > maior) {
        maior = vendas[i];
        Diamaior = i;
        }
    }
    
    printf ("\nMaior venda = %2.f, %d° dia.\n", maior, Diamaior);

    return 0;
}