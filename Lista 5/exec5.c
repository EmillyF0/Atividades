#include <stdio.h>

int main() {
    int codigo;
    
    printf ("Digite o código:\n");
    scanf ("%d", &codigo);
    
    while (codigo != 4321) {
        printf ("Código incorreto!\nDigite novamente:\n");
        scanf ("%d", &codigo);
    }
    printf ("Acesso liberado!");

    return 0;
}