#include <stdio.h>

int main() {
    float numeros[6], soma = 0, media, Qntnumero = 0;
    int i;
    
    for (i=0;i<6;i++) {
        printf ("Digite o número %d°:\n", i);
        scanf ("%f", &numeros[i]);
        
        soma += numeros[i];
        media = soma / 6;
    }
    printf ("Media: %2.f\n", media);

    return 0;
}