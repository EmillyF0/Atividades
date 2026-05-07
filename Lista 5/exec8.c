#include <stdio.h>

int main() {
   float orcamento, produto, total = 0;
   int quantidadeProdutos = 0;
   printf ("Digite o orçamento inicial:\n");
   scanf ("%f", &orcamento);
   
   while (total <= orcamento) {
       printf ("Valor do produto:\n");
       scanf ("%f", &produto);
       
       if (produto > 0) {
           total += produto;
           quantidadeProdutos++;
       }
       else {
           printf ("Inválido!");
       }
   } 
   
   if (total > orcamento) {
       printf ("Orçamento ultrapassado!\n");
   }
   else {
       printf ("Valor inválido!");
   }
   
   printf ("Total da compra: %.2f\n", total);
   printf ("Quantidade de produtos: %d\n", quantidadeProdutos);

    return 0;
}