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
/*
int main(void){
    int num;
    scanf("%d",&num);
    if (num%5==0 && num%3==0) printf("sim");
    else printf("nao");
    getch();
    return 0;
}
*/
/*Desenvolver um algoritmo para ler um n�mero �x� e calcular
e imprimir o valor de �y� de acordo com as condi��es abaixo:
- y = x , se x < 1
- y = 0 , se x = 1
- y = x�, se x > 1
*/

/*
#include <math.h>
int main(void){
    int x,y;
    scanf("%d",&x);
    if (x<1) y=x;
    else if (x==1) y=0;
    else y=pow(x,2);
    printf("%d",y);
    getch();
    return 0;
}
*/

/*Fazer um programa em C que dado tr�s valores A, B e C, verificar se eles formam
um tri�ngulo. Formando tri�ngulo, dizer se � tri�ngulo equil�tero, is�sceles ou
escaleno.
- Condi��o para ser tri�ngulo: a soma do comprimento de dois lados deve ser
maior (ou igual) ao comprimento do terceiro lado.
- Tipos de tri�ngulos:
- tri�ngulo equil�tero: todos os lados s�o iguais
- tri�ngulo is�sceles: dois lados iguais
- tri�ngulo escaleno: todos os lados s�o diferentes
*/
/*
int eh_triangulo(x,y,z){
    if (x==y && y==z) return 1;
    else if (x==y && x!=z) return 2;
    else if (x!=y && x!=z && y!=z) return 3;
    else return 0;
}
int main(void){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (eh_triangulo(a,b,c)==1) printf("equilatero");
    else if (eh_triangulo(a,b,c)==2) printf("isosceles");
    else if (eh_triangulo(a,b,c)==3) printf("escaleno");
    getch();
    return 0;
}
*/
//Fa�a um programa em C que identifique se a raiz quadrada de um dado n�mero
//inteiro X � inteira, ou seja, se X � um n�mero quadrado perfeito
/*
#include <math.h>
int main(){
    int x,aux1,aux2;
    scanf("%d",&x);
    aux1=sqrt(x);
    aux2=pow(aux1,2);
    if (x==aux2) printf("a raiz do numero eh um quadrado perfeito ");
    else printf("a raiz do numero nao eh um quadrado perfeito");
    return 0;
}
*/
/*
Escreva um programa em C para checar se um caracter é uma letra, dígito ou
caractere especial.
DICA: façam o seguinte teste: printf("%d", 'a');

int main(){
    char c;
    int aux;
    scanf("%c",&c);
    aux=c;
    if (aux>32){
        if (aux>=48 && aux<=57) printf("numero\n");
        else if (aux>=65 && aux<=122) printf("letra\n");
        else printf("carctere especial\n");
        printf("%d\n",c);
        getch();
        return 0;
    }
}
*/
//Usando o switch, crie uma calculadora simples (operações de +,-,*, e /). O
//usuário digita uma expressão na forma valor1 oper valor2
/*
int main(void){
  int a,b;
  char c;
  scanf("%d %c %d",&a,&c,&b);
  switch(c){
    case '+': printf("%d",a+b); break;
    case '-': printf("%d",a-b); break;
    case '*': printf("%d",a*b); break;
    case '/': printf("%d",a/b); break;
    default : printf("a\n"); break;
  }
  getch();
  return 0;
}
*/












































































