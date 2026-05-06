#include <stdio.h>

int main() {
    int prioridade, continuar;
    int baixa = 0, media = 0, alta = 0;
    
    do {
        printf ("Digite sua prioridade:\n");
        scanf ("%d", &prioridade);
        
        if (prioridade == 1) {
            baixa++;
        }
        else if (prioridade == 2) {
            media++;
        }
        else if (prioridade == 3) {
            alta++;
        }
        else {
            printf ("Prioridade inválida!");
        }
        
        printf ("Deseja continuar? (1- sim/0- não)\n");
        scanf ("%d", &continuar);
        
    } while (continuar != 0);
    
    printf ("Baixas: %d\n", baixa);
    printf ("Medias: %d\n", media);
    printf ("Altas: %d\n", alta);
    
    return 0;
}