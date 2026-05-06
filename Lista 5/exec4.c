#include <stdio.h>

int main() {
   int i, status, concluidas = 0, pendentes = 0;
   
   for (i=0; i<8; i++) {
       printf ("Atividade foi concluída? (1- concluída / 0- Pedente)\n"); 
       scanf ("%d", &status);
       
       if (status == 1) {
           concluidas++;
       }
       else {
           pendentes++;
       }
   }
   
   printf ("Atividades concluídas: %d\n", concluidas);
   printf ("Atividades pendentes: %d\n", pendentes);
   
    return 0;
}