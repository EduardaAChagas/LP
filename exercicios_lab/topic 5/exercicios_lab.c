#include <stdio.h>

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
