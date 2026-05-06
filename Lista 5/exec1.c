#include <stdio.h>

int main() {
    int i, codigo; 
    int validos = 0, invalidos = 0;
    
    for (i=0;i<10;i++) {
        printf ("Digite um código:\n");
        scanf ("%d", &codigo);
        
        if (codigo >= 1000 && codigo <= 9999) {
            validos++;
        }
        else {
            invalidos++;
        }
    }

printf ("Codigos validos: %d\n", validos);
printf ("Codigos invalidos: %d\n", invalidos);

    return 0;
}