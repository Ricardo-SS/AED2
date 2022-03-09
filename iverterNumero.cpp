#include <stdio.h>

//programa para inverter uma sequencia de numeros

int main (){
 
    int numero, cifra;	//criando as variaveis
    
    printf("Digite uma sequencia de numeros: ");	//solicitando ao ususraio um numero
    scanf("%i", &numero);			//recebe o numero digitado e armazena na respectiva variavel
    if (numero >= 0){	
        			//se numero > 0 entra nessa condicao
        do {
			cifra = numero % 10;
			printf("%i", cifra);	
			numero /= 10;
		} while (numero != 0);   

	}
	else {		//se o numero for menor que zero imprime a mensagem de numero invalido
		printf("Numero inavlido, tente um numero positivo :'(");
	}
    	
	return 0;
}