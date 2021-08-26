#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
 {


	
	int a,b,c,p;

	
	
	printf ("Bem vindo a minha primeira calculadora em C!\n");
	printf ("Neste momento, qual operacao voce precisa?\n 1-Adicao \n 2-Subtracao \n 3-Multiplicacao \n 4-Divisao \n Digite apenas o numero:");
	scanf ("%i", &p);			
	printf ("digite abaixo oprimeiro número de seu calculo: \n");
	scanf ("%i", &a);
	printf ("digite abaixo o segundo número de seu calculo: \n");
	scanf ("%i", &b);
	printf ("a resposta é %i!", &c);
	return 0;
}
