#include <stdio.h>

int main() {
    int opcao;
    
    do {
        printf ("1 - opção 1\n");
        printf ("0 - Sair\n");
        printf ("Escolha uma das opções:\n");
        scanf ("%d", &opcao);
        
    } while (opcao != 0); 
    
    printf ("Você saiu!");
    
    return 0;
}