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
*/
