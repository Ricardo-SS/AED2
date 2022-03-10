#include <stdio.h>

//programa para inverter uma sequencia de numeros

int main (){
 
    int numero, cifra;	//criando as variaveis
    
    printf("Digite uma sequencia de numeros: ");	//solicitando ao ususraio um numero
    scanf("%i", &numero);			//recebe o numero digitado e armazena na respectiva variavel
    if (numero >= 0){				//se numero > 0 entra nessa condicao
        do {
			cifra = numero % 10;	//a variavel cifra recebe o resto da divisao do numero por 10
			printf("%i", cifra);	//printa o numero na tela a cada execucao
			numero /= 10;			//numero recebe o numero dividido por 10
		} while (numero != 0);		//enquanto o resto da divisao for diferente de zero a funcao sera executada.
	}
	else {		//se o numero for menor que zero imprime a mensagem de numero invalido
		printf("Numero invalido, tente um numero positivo :'(");
	}
    	
	return 0;
}