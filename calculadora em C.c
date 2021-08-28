#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
 {
	float a, b,soma, subtracao, divisao,multiplicacao;
	int p;
	soma= a+b;
	subtracao= a-b;
	divisao= a/b;
	multiplicacao = a*b;
	
	
	printf ("Bem vindo a minha primeira calculadora em C!\n");
	printf ("Neste momento, qual operacao voce precisa?\n 1-Adicao \n 2-Subtracao \n 3-Multiplicacao \n 4-Divisao \n Digite apenas o numero:\n");
	scanf ("%i", &p);
	
	if ((p<=0) ||  ( p>= 5))
	{
		printf ("esta opção é invalida!");
		
		return 0;	}		

	printf ("digite abaixo oprimeiro número de seu calculo: \n");
	scanf ("%f", &a);
	printf ("digite abaixo o segundo número de seu calculo: \n");
	scanf ("%f", &b);
	
		printf ("o resultado de sua soma e %f.\n", &soma);


		return 0;
}
