#include <stdio.h>
#include <limits.h>
int main(void){
  int n;
  scanf("%d",&n);
  int i,c,maior=INT_MIN,menor=INT_MIN,soma=0;
  float media,desvio;
  for (i=1;i<=n;i++){ 
  	menor=c;
    scanf("%d",&c);
    if (c>=maior){
      maior=c;
    }//if
    if (c<=menor){
      menor=c;
    }//if
    soma+=c;
  }//for
  media=soma/(float)n;
  printf("menor = %d\n",menor);
  printf("maior = %d\n",maior);
  printf("soma = %d\n",soma);
  printf("media = %.2f\n",media);
  return 0;
}//main

