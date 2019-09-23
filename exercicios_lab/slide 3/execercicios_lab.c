#include <stdio.h>

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


