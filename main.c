#include <stdio.h>
#include <math.h>

int subtracao(double num1, double num2){
  return num1-num2;
}

int multiplica(int number1, int number2) {
	return number1 * number2;
}

int soma (int a , int b){
  return a+b;
}

int exponenciacao(int a, int b){
	int valor = pow(a,b);
	return valor;
}

void dividir(){
  int valor1, valor2;
  printf("informe o primeiro valor:\n");
 	scanf("%d", &valor1);
 	printf("informe o primeiro valor:\n");
 	scanf("%d", &valor2);
 	printf("o resultado é: %d", valor1/valor2);
 }



int main (){
    int valor1, valor2;
    int option, a, b,valor;

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
            printf("Soma = %d \n",soma(a,b));
        break;
        case 2:
            a=3,b=2;
            printf("Multiplicacao = %d \n",multiplica(a,b));
        case 3:
            dividir();
        break;
        case 4:
          a=1,b=2;
          printf("Subtração = %d \n",subtracao(a,b));
        break;
        case 5 :
            a = 2,b = 2;
            valor = exponenciacao(a, b);
            printf("%d\n", valor);
        break;
    }
}
