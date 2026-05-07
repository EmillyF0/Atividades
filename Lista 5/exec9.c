#include <stdio.h>

int main() {
   int nota, continuar;
   int quantidade = 0, soma = 0;
   float media;
   
   do {
       printf ("Nota de satisfação:\n");
       scanf ("%d", &nota);
       
       if (nota>=1 && nota<=5) {
           soma += nota;
           quantidade++;
       }
       else {
           printf ("Nota inválida\n");
       }
       
       printf ("Deseja continuar? (1- sim/0- não)\n");
       scanf ("%d", &continuar);
   } while (continuar != 0);
   
   if (quantidade > 0) {
       media = soma / quantidade;
       printf ("Media: %.2f", media);
   }
   else {
       printf ("Nenhuma nota válida registrada!");
   }

    return 0;
}