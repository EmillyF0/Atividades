
#include <stdio.h>

int main() {
   float meta, Valormes, total = 0;
   int mesesValidos = 0;
   
   printf ("Digite a meta de economia: \n");
   scanf ("%f", &meta);
   
   while (total < meta) {
       printf ("Digite o valor do mês: \n");
       scanf ("%f", &Valormes);
       
       if (Valormes > 0) {
           total += Valormes;
           mesesValidos++;
       }
       else {
           printf ("VALOR DESCONSIDERADO");
       }
   }
   
   printf ("Total economizado: %.2f\n", total);
   printf ("Meses válidos: %d\n", mesesValidos);

    return 0;
}