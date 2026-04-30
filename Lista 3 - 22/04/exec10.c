#include <stdio.h>

int main() {
    float cpu, memoria;
    int erroCritico;

    printf("Digite o uso de CPU: ");
    scanf("%f", &cpu);

    printf("Digite o uso de memoria: ");
    scanf("%f", &memoria);

    printf("Ha erro critico? (1/0): ");
    scanf("%d", &erroCritico);
    
    if (erroCritico == 1) {
        printf ("ALERTA MÁXIMO");
    }
    else if (erroCritico == 0) {
        if (cpu > 80 && memoria > 80) {
            printf ("ALERTA ALTO");
        }
        else if (cpu > 80 || memoria > 80) {
            printf ("ALERTA MEDIO");
        }
        else {
            printf ("FUNCIONAMENTO NORMAL");
        }
    }
    else {
        printf ("INVÁLIDO");
    }

    return 0;
}