#include <stdio.h>

int main() {
    int senha;
    printf ("Digite a senha:\n");
    scanf ("%d", &senha);
    
    while (senha != 1234) {
        printf ("Digite a senha novamente\n");
        scanf ("%d", &senha);
    }
    printf ("Acesso liberado");
    

    return 0;
}