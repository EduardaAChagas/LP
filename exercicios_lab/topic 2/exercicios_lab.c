#include <stdio.h>
#include <limits.h>
/*
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
*/
//fatorial de um numero

long long int fatorial(int x){
	if (x == 0) return 1;
	return (x * fatorial(x-1) * 1);
}
int main(void){
	int num;
	scanf("%d",&num);
	printf("%lld",fatorial(num));
	getch();
	return 0;
}