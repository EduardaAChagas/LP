#include <stdio.h>

void troca(int* i, int* j) {
 	int temp = *i;
 	*i = *j;
 	*j = temp;
}
int main(void) {
 	int *ptrA, *ptrB, a = 10, b = 20;
 	ptrA = &a;
 	ptrB = &b;
 	troca(ptrA, ptrB);
 	printf("a e' %d e b e' %d\n", a, b);
 	return 0; 
}