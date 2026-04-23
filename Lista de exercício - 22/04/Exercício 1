#include <stdio.h>

int main() {
    int biometria, senha, modoSeguro;
    
    printf("Digite o modo seguro (1/0): ");
    scanf("%d", &modoSeguro);
    
    printf("Digite a biometria (1/0): ");
    scanf("%d", &biometria);

    printf("Digite a senha (1/0): ");
    scanf("%d", &senha);

    if (modoSeguro == 1 && senha == 1) {
        printf ("Desbloqueado");
    }
    else if (modoSeguro == 0) {
        if (senha == 1 || biometria == 1) {
            printf ("Desbloqueado");
        }
        else {
            printf ("Bloqueado");
        }
    }
    else {
        printf ("Bloqueado");
    }
    
    return 0;
}