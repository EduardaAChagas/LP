#include <stdio.h>
/*
#include <math.h>
#include <windows.h>
static dec=1;
int contdec(int numero){
	numero=abs(numero);
	int div=numero/10;
	if (div==0) return dec;
	else if (numero>0) {
		dec++;
		return contdec(div);
	}
}
int main(){
	Beep(1500,300);
	int numero;
	scanf("%d",&numero);
	printf("%d",contdec(numero));
	getch();
	return 0;
}
*/
int main(){
	int n,i;
	printf("insira a quantidade de posi��es do vetor\n");
	scanf("%d",&n);
	int v[n],v2[n];
	for (i=0;i<n;i++){
		scanf("%d",&v[i]);
	}//for
	for (i=0;i<n;i++){
		v2[i]=v[n-1-i];
	}//for2
	for (i=0;i<n;i++){
		printf("%d",v2[i]);
	}//for3	
	getch();
}//main