#include <stdio.h>
#include <stdlib.h>

//Escreva um programa em C para deletar um valor de uma certa posi��o
//(fornecida como entrada) de um vetor, em seguida, mostre esse vetor.
/*
int main(void){
	int n,i,p=5;
	int v[p],v2[p-1];
	for (i=0;i<p;i++){
		v[i]=i;
		printf(" %d ",v[i]);
	}
	printf("\n");
	scanf("%d",&n);
	for (i=0;i<n;i++){
		v2[i]=v[i];
	}
	for (i=n;i<p-1;i++){
		v2[i]=v[i+1];
	}
	for (i=0;i<p-1;i++){
		printf(" %d ",v2[i]);
	}
	getch();
	return 0;
}
*/
/*
int main(void){
	int v[]={1,2,3,4};
	int tam=sizeof(v)/sizeof(int);
	int n,i,j,k;
	printf("rotacionar quantas vezes\n");
	scanf("%d",n);

	
	for (i=0;i<n;i++){
		int primeiro=v[0];
		for (j=0;j<tam-1;j++){
			v[j]=v[j+1];	
		}
	v[tam-1]=primeiro;		
	}
	for (k=0;k<tam;k++){
		printf("%d",v[k]);
	}
	return 0;
}
*/













