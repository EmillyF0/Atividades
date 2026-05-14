#include <stdio.h>

int main() {
    int a[5], b[5], c[5];
    int i;
    
    for (i=0;i<5;i++) {
        printf ("Digite os números de A:\n", i);
        scanf ("%d", &a[i]);
    }
    for (i=0;i<5;i++) {
        printf ("Digite os números de B:\n", i);
        scanf ("%d", &b[i]);
    }
    for (i=0;i<5;i++) {
        c[i] = a[i] + b[i];
        printf ("Resultado: %d\n", c[i]);
    }
    
    return 0;
}