#include <stdio.h>
#include <math.h>
//01.ler os 4 valores correspondentes aos eixos x e y de dois pontos quaisquer no plano e calcule a distancia entre
//eles,mostrando 4 casas decimais após a vírgula.
/*
#include <math.h>
int main(){
	float x1,y1,x2,y2,dist;
	scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
	dist=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	printf("%.4f",dist);
    return 0;
}
*/
//11. dar a raiz de um numero usando recursividade e o metodo de newton

float raiz(float n, float r){
	if (abs(pow(r,2)-n)<0.001) return r;
	else {
		r=(pow(r,2)+n)/(2*r);
		raiz(n,r);
	}
}
int main(){
	float n;
	int r=1;
	scanf("%f",&n);
	printf("%.2f",raiz(n,r));
	return 0;
}






















