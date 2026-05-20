#include <stdio.h>

int main () {
    int num, maior, menor;
    int i;
    
    for (i=1;i<=5;i++) {
        printf ("Digite %d° número:\n", i);
        scanf ("%d", &num);
        
        if (i==1) {
            maior = num;
            menor = num;
        }
        else {
            if (num > maior) {
                maior = num;
            }
            if (num < menor) {
                menor = num;
            }
        }
    }
    
    printf ("O maior número é: %d\n", maior);
    printf ("O menor número é: %d\n", menor);

    return 0;
}