#include <stdio.h>

/*
void paraMaiuscula(char *string){
	while(*string!='\0'){
		if (*string>='a' && *string<='z')
			*string=*string-('a'-'A');
		string++;
	}
}
int main(){
	char string[100];
	fgets(string,100,stdin);
	char* ptr;
	ptr=string;
	paraMaiuscula(ptr);
	printf("%s\n",string);
	getch();
	return 0;
}
*/

int main(){
	int a=30,b=5;
	int *p = &a,*q=&b;
	printf("%d",p-q);
	return 0;
}
