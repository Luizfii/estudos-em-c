#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
    int a, b, c, d, e, f, ponto;

 	printf ("Bem vindo a minha primeira calculadora em C!\n");
	printf ("Neste momento, qual operacao voce precisa?\n 1-Adicao \n 2-Subtracao \n 3-Multiplicacao \n 4-Divisao \n Digite apenas o numero:\n");
	scanf ("%i", &ponto);
    
    
    	printf("digite o primeiro numero:\n");
	scanf("%i", &a);
	printf("digite o segundo numero:\n");
	scanf("%i", &b);
	
	
    if ((ponto<1)||(ponto>4))
    {
    printf("numero invalido!");
	return 0;
	}
    c            = a + b;
    d       = a - b;
    e           = a * b;
    f             = a / b;
if (ponto==1){
   					 printf( "A soma e: %i\n", c );
   					 return 0;
	}
	
	 		
	 			if (ponto==2){
	 				printf( "A subtracao e: %i\n", d );
	 				return 0;
					 }
					 
				if (ponto==3){
	 					printf( "O produto e: %i\n", e );
					 }
					 
				if (ponto==4){
					 		 printf( "A divisão e: %i \n", f );
						 }					
    return 0;
}

