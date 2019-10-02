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
/*
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
*/
// Dado um inteiro x, desenhe um padrão de piramide de tamanho x utilizando ‘*’
/*
#include <string.h>
int main(){
	int x,i,j;
	char a='*';
	scanf("%d",&x);
	int cont=x;
	for (i=0;i<x+1;i++){
		for (j=0;j<i;j++){
			printf("%c",a);
			cont--;
		}//for interno
		printf("\n");
	}//for externo
	return 0;
}//main
*/
//Receba um inteiro e mostre a quantidade de digitos
/*
#include <math.h>

int main(){
	int x,div,cont;
	scanf("%d",&x);
	div=abs(x);
	cont=1;
	while (div>10) {
		div=div/10;
		cont++;
	}//while
	printf("%d",cont);
	return 0;
}//main
*/
//leia um numero inteiro maior que 10 e depois o mostre na ordem inversa
/*
#include <math.h>

int main(){
	int x,a,b,c,d;
	scanf("%d",&x);
	a=abs(x);
	c=x;
	if(x<10) printf("o numero precisa ser maior que 10");
	else{
		while(c>0){
			a=c%10;
			b=ceil(c/10);
			printf("%d",a);
			c=b;
		}
	}
	return 0;
}
*/




















































