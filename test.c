#include <stdlib.h>
#include <stdio.h>

int main(){
  int num1, num2, tot;
  printf("Test che esegue la somma di due numeri.\n");

  printf("\niInserire primo addendo: ");
  scanf("%d",&num1);

  printf("\nInserire secondo addendo: ");
  scanf("%d",&num2);

  tot=num1+num2;

  printf("la somma dei due numeri in decimale: %d, in esadecimale: %x \n",tot,tot);

  return 0;
}
