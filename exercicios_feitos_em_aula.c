#include <stdio.h>
//1-Dada uma temperatura em graus Farhrenheit, informe o valor correspondente em graus Celsius:
/*
int main(){
    printf("Informe uma temperatura em Fahrenheit para que seja convertida para Celsius \n");
    float temp,celsius;
    scanf("%f",&temp);
    celsius=temp-(32.0*(5.0/9.0));
    printf("Tempreratura em Fahrenheit:%f\nTemperatua em Celsius:%f\n",temp,celsius);
    return 0;
}
*/
//2-Dadas as medidas dos catetos de um triangulo retangulo, informe a medida da hipotenusa

#include <math.h>
int main(void){
    int catetoA,catetoB,hipotenusa;
    scanf("%d %d",&catetoA,&catetoB);
    hipotenusa=sqrt(pow(catetoA,2)+pow(catetoB,2));
    printf("Hipotenusa: %d\n",hipotenusa);
    return 0;
}
