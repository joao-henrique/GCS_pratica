#include <stdio.h>

int soma(int a,int b){
	return a+b;
}

int main (){
    int option;

    printf("Escolha sua  opção: \n");
    printf(" 1 - Soma\n");
    printf(" 2 -  Multplicação\n");
    printf(" 3 -  Divisão\n");
    printf(" 4 -  Subtração\n");
    printf(" 5 -  Potenciação\n");
    scanf("%s\n",option );

    switch (option) {
        case 1:
            int a=1,b=2;
            printf("Soma = %d\n",soma(a,b));
        break;
        case 2:

        case 3:

        case 4:

        case 5:
    }


}
void dividir(){
	int valor1, valor2;
	print("informe o primeiro valor:\n");
	scanf("%d", &valor1);
	print("informe o primeiro valor:\n");
	scanf("%d", &valor2);
	scanf("o resultado é: %d", valor1/valor2);
}
