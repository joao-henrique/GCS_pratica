#include <stdio.h>
#include <math.h>

int soma(int a,int b){
	return a+b;
}

int exponenciacao(int a, int b){
	int valor = pow(a,b);

	return valor;
}


int main (){

 int a, b, valor;

 a = 2;
 b = 2;

 valor = exponenciacao(a, b);
 printf("%d\n", valor);


}
