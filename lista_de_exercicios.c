#include <stdio.h>
//ler os 4 valores correspondentes aos eixos x e y de dois pontos quaisquer no plano e calcule a distancia entre
//eles,mostrando 4 casas decimais após a vírgula.
#include <math.h>
int main(){
	float x1,y1,x2,y2,dist;
	scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
	dist=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	printf("%.4f",dist);
    return 0;
}
