// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int opcao;
   float saldo = 1000.00, deposito;
   
   do {
       printf ("\n1- Consultar saldo\n");
       printf ("2- Depositar\n");
       printf ("0- Sair\n");
       printf ("Escolha uma opção: \n");
       scanf ("%d", &opcao);
       
       if (opcao == 1) {
           printf ("Saldo: %.2f", saldo);
       }
       else if (opcao == 2) {
           printf ("Valor do depósito:\n");
           scanf ("%f", &deposito);
           
           if (deposito > 0) {
              saldo += deposito;
           }
           else {
               printf ("Inválido");
           }
       }
       else {
           printf ("Opção inválida");
       }
   } while (opcao != 0);
   
   printf ("Programa encerrado");
   
   
    return 0;
}