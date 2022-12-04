#include <stdio.h>

int main(void) {
char nom  [10];
float prix [10];
int i = 0;
int j = 0;
nom[i]=0;
prix[j]=0;

while(i<10){
printf("Entrer le Nom article : \n");
scanf("%10s",&nom[i]);
i++;
}

while(j<10){
  printf("Entrer le prix de l'article hors taxe  : \n");
scanf ("%10f",&prix[j]);
j++;
}
  
for(i=0;i<10;i++){

  printf("Nom des articles: %s\n",nom[i]);
}
for(j=0;j<10;j++){

  printf("Prix des articles hors taxes :%f\n",prix[j]);
}

for(j=0;j<10;j++){
  printf("Prix des articles avec taxes :%f\n",prix[j]);
}
  
  return 0;
}
