#include <stdio.h>
/*
int main(){
	int a[5][5],at[5][5];
	srand(time(NULL));
	int i,j;
	
	for (i=0;i<5;i++){
		for(j=0;j<5;j++){
			a[i][j]=rand()%10;
		}
	}
	for (i=0;i<5;i++){
		for (j=0;j<5;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("--------------------------------");
	printf("\n");
	for (i=0;i<5;i++){
		for(j=0;j<5;j++){
			at[j][i]=a[i][j];
		}
	}
	
	for (i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d",at[i][j]);
		}
		printf("\n");
	}
	return 0;
}
*/
//strings
//scanf le ate o primeiro espaço em branco, nao precisa do &
/*

int main(){
	int nome[30];
	fgets(nome,sizeof(nome),stdin);
	printf("%s",nome);
	return 0;
}

#include <string.h>


int main(){
	char str[100];
	int i=1;
	fgets(str,sizeof(str),stdin);
	while(str[++i]!='\0'){
	}
	printf("%d",i-1);
	return 0;
}
*/
int main(){
	char str[100];
	int a=0,z;
	fgets(str,sizeof(str),stdin);
	printf("%s", str);
	z=strlen(str)-2;
	printf("z: %d\n",z);
	while (a<z){
		if (str[a]!=str[z]) {
			break;
		}
		a++;
		z--;
	}
	printf("z: %d\n",z);
	printf("a: %d\n",a);
	if (a<z) printf("nao eh");
	else printf("eh");
	return 0;
}











































