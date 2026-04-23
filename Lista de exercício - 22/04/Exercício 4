#include <stdio.h>

int main() {
    int loginOk, dispositivoConhecido, tentativaSuspeita;

    printf("Login correto? (1/0): ");
    scanf("%d", &loginOk);

    printf("Dispositivo conhecido? (1/0): ");
    scanf("%d", &dispositivoConhecido);

    printf("Tentativa suspeita? (1/0): ");
    scanf("%d", &tentativaSuspeita);

    if (loginOk == 1) {
        if (dispositivoConhecido == 1 && tentativaSuspeita == 0) {
            printf ("Acesso liberado!");
        }
        else {
            printf ("Verificação extra necessária!");
        }
    }
    else {
        printf ("Acesso negado!");
    }

    return 0;
}