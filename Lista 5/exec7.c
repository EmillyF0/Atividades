#include <stdio.h>

int main() {
   float temperatura;
   int i, seguro = 0, risco = 0;
   
   for ( i = 0 ; i < 12 ; i++ ) {
       printf ("Digite a temperatura local: \n");
       scanf ("%f", &temperatura);
       
       if (temperatura <= 75) {
           seguro++;
       }
       else {
           risco++;
       }
   }
   printf ("Leituras seguras: %d\n", seguro);
   printf ("Leituras de risco: %d\n", risco);

    return 0;
}