#include <stdio.h>
#include <string.h>

int main(void) {
  
  return 0;
}

/*
1 - Questão
  char str[10];
  strcpy(str,"aduarda");
  for(int i=0;i<strlen(str);i++){
    if('a'<=str[i] && str[i]<y'z')
      str[i]-=32;
  }
  printf("%s\n",str);
2 - Questão
  char str[100];
	int a,e=0;
	fgets(str,sizeof(str),stdin);
	a=strlen(str)-2;
  while(e<a){
		if (str[e]!=str[a]){
			break;
		}
		else {
			e++;
			a--;
		}
	}
	if (e<a) printf("nao eh palindromo");
	else printf("eh palindromo");
  return 0;
*///questao 3
/*
int main(void) {
  char str[100],aux;

  int a,e=0;
	fgets(str,sizeof(str),stdin);
  a=strlen(str)-2;
  while(e<a){
    aux=str[a];
    str[a]=str[e];
    str[e]=aux;
    e++;
    a=a-1;
  }
  printf("%s",str);
  return 0;
}

*/
//questao 4
int main(void) {
  char str[100],bus[10];
	int num,num2,cont=0;
	printf("bota ai a estringue\n");
	fgets(str,sizeof(str),stdin);
	printf("bota ai o q tu que busca na estringue\n");
  fgets(bus,sizeof(bus),stdin);
	num=strlen(str)-1;
  num2=strlen(bus)-1;
	for (int i=0;i<num;i++){
    cont=0;
		for (int j=0;j<num2;j++){
      printf("%c %c\n",str[i+j],bus[j]);
			if (str[i+j]==bus[j]){
				cont++;
        if(cont==num2)
          break;
			}
		}
    if(cont==num2)
      break;
	}
  if(cont==num2) 
				printf("tem");
  else
    printf("nao tem porra");
  return 0;
}