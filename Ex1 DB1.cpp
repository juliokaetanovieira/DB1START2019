#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{	
	
	int num, cont, i, mult;
	
		printf(" Digite um numero\n");
		scanf(" %d", &num);
		cont = 0;

	
	//Verificar se é par ou Impar
	if(num % 2 == 0){
		printf("e par, nao e impar, ");
	}
	else{
		printf("e impar, nao e par, ");
	}
	
	//Verificar se é maior que 10
	if(num > 10){
		printf("e maior que 10, ");
	}
	else{
		printf("nao e maior que 10, ");
	}
	
	//Calcular o dobro do numero digitado
	mult = num * 2;
	 printf("o dobro de %d e %d, ", num, mult);
	
	//Verificar se o numero é Primo
	  for (i = 1; i <= num; i++) {
	    if (num % i == 0) { 
	     cont++;
	    }
	  }
	    
	  if (cont == 2)
	    printf("e primo! \n", num);
	  else
	    printf("nao e primo! \n", num);
	  
		system("pause");
		return 0;
}