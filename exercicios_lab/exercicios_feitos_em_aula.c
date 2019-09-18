#include <stdio.h>
//1-Dada uma temperatura em graus Farhrenheit, informe o valor correspondente em graus Celsius:
/*
int main(){
    printf("Informe uma temperatura em Fahrenheit para que seja convertida para Celsius \n");
    float temp,celsius;
    scanf("%f",&temp);
    celsius=temp-(32.0*(5.0/9.0));
    printf("Tempreratura em Fahrenheit:%f\nTemperatua em Celsius:%f\n",temp,celsius);
    getch();
    return 0;
}
*/
//2-Dadas as medidas dos catetos de um triangulo retangulo, informe a medida da hipotenusa
/*
#include <math.h>
int main(void){
    int catetoA,catetoB,hipotenusa;
    scanf("%d %d",&catetoA,&catetoB);
    hipotenusa=sqrt(pow(catetoA,2)+pow(catetoB,2));
    printf("Hipotenusa: %d\n",hipotenusa);
    getch();
    return 0;
}
*/
//desenvolver um algoritmo que verifica se um numero eh divisivel por 5 e 3 ao mesmo tempo
int main(void){
    int num;
    scanf("%d",&num);
    if (num%5==0 && num%3==0) printf("sim");
    else printf("nao");
    getch();
    return 0;
}














