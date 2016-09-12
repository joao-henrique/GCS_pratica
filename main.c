#include <stdio.h>

double subtracao(double num1, double num2){
    return num1-num2;
}

int multiplica(int number1, int number2) {
	return number1 * number2;
}

int soma (int a , int b){
  return a+b;

int multiplica(int number1, int number2) {

	return number1 * number2;

}

int main (){

    int option, a, b;
    printf("Escolha sua  opção: \n");
    printf(" 1 - Soma\n");
    printf(" 2 -  Multplicação\n");
    printf(" 3 -  Divisão\n");
    printf(" 4 -  Subtração\n");
    printf(" 5 -  Potenciação\n");
    scanf("%d",&option);

    switch (option) {
        case 1:
            a=1,b=2;
            printf("Soma = %d\n",soma(a,b));
        break;
        case 2:
            a=3,b=2;
            printf("Multiplicacao = %d\n",multiplica(a,b));
        case 3:
          a=1,b=2;
        printf("Subtração = %d\n",subtracao(a,b));
        break;
        case 4:


        break;
        case 5 :
        break;
    }
}
