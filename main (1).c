#include <stdio.h>
int main(void){
int notes;
int n = 0;
printf("entre des notes entre 0 et 20, hors de cette intervalle,la saisie s'arrete.\n");
do{
scanf("%d",&notes);
n++;
}
while((notes>=0) && (notes<=20));
n = n-1;
if (n>0){
  printf("%d",n);
}
else {
  printf("erreur");
}

    return 0; 
}