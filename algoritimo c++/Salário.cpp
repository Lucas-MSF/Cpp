#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float salario, aumento;
	char p;
	
	printf ("Digite o valor do salario do funcionario:");
	scanf("%f", &salario);
	printf ("\nDigite em qual plano o funcionario esta (A, B ou C):");
	scanf("%s", &p);
	
	if(p=='a'){
		aumento = salario + salario*0.10;
		printf("\nO salario atual do funcionario eh R$%.2f.\n", aumento);
	}
	else if (p=='b'){
		aumento = salario + salario*0.15;
		printf("\nO salario atual do funcionario eh R$%.2f.\n", aumento);
	}
	else if (p=='c'){
		aumento = salario + salario*0.20;
		printf("\nO salario atual do funcionario eh R$%.2f.\n", aumento);
	}
	else{
		printf("\nValores invalidos\n");
	}
	
	system("PAUSE");

    
}
