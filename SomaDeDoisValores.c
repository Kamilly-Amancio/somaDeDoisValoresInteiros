#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <conio.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	
	int num1,num2,s=0;
	
	printf("\n*****Soma dos valores***");
	printf("\nDigite o n�mero:");
	scanf("%i", &num1);
	printf("\nDigite o n�mero:");
	scanf("%i", &num2);
	
	s=num1+num2;
	
	printf("\n\n----------Soma dos valores----------");
	printf("\nA soma de %i e %i � %i", num1,num2,s);
	getch();
	
	return 0;
	
}
