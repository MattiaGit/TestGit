#include <stdio.h>
#include <stdlib.h>

//prototipo della funzione conferma:
int conferma(char *domanda, char si, char no);

int main(){

  int Re;
  char domanda[] = {'d'};
  char si = 'S';
  char no = 'N';
  
  Re = conferma(domanda, si, no);
  printf("%d", Re);
  
}

int conferma(char *domanda, char si, char no)
{
  char risposta;

  do {
    printf("%s?",domanda);
    scanf("%s",&risposta);
  }
    while(risposta != si && risposta != no);
    if(risposta == si)
      return(1);
    return(0);

}
