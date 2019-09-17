#include <stdio.h>
//Dada uma temperatura em graus Farhrenheit, informe o valor correspondente em graus Celsius:
int main(){
    printf("Informe uma temperatura em Fahrenheit para que seja convertida para Celsius \n");
    float temp,celsius;
    scanf("%f",&temp);
    celsius=temp-(32.0*(5.0/9.0));
    printf("Tempreratura em Fahrenheit:%f\nTemperatua em Celsius:%f\n",temp,celsius);
    return 0;
}
