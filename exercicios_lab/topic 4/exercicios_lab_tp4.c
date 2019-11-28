#include <stdio.h>
#include <string.h>

//Codifique uma função semelhante à strlen(s), que devolve o número de
//caracteres armazenados na string s.
/*
int main(){
    char str[100];
	int i=1;
	fgets(str,sizeof(str),stdin);
	while(str[++i]!='\0'){
	}
	printf("%d\n",i-1);
	return 0;
}
*/
//Crie um programa em C para checar se uma string é palíndromo ou não
/*
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
	if (a<z) printf("nao eh\n");
	else printf("eh");
	return 0;
}
*/

//escreva um programa em C para contar o número total de palavras em uma string usando loop

int main(){
    int i,espac=0;
    char str[100];
    fgets(str,sizeof(str),stdin);
    int tam=strlen(str)-1;
    for (i=0;i<tam;i++){ 
        if(str[i]==' '){
            espac++;
        }
    }
    espac++;
    printf("%d\n",espac);
    return 0;
}
