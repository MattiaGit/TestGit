#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int *b){
int tmp;
tmp=*a;
*a=*b;
*b=tmp;
}

int main(){
int a,b;
printf("inserisci a e b io faccio swap\n");
printf("a:");
scanf("%d",&a);
printf("b:");
scanf("%d",&b);

swap(&a,&b);

printf("a: %d \t b: %d \n",a,b);
return 0;
}