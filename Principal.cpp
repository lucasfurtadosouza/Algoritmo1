/*
	Aula do dia: 11/03/2024
	Aprendemos PRINT e Definição de Variáveis
*/
#include <cstdio>

//Função principal
int main() { //Início do programa principal
	/*
		- Sintaxe:
		nome do comando em minusculo: printf
		Abre-se Parênteses.
		Abre-se Aspas duplas.
		Coloca-se a mensagem desejada.
		%? (identificador de tipo de dado).
		Fecha-se Aspas Duplas.
		Coloca-se virgula.
		Coloca-se o dado a ser apresentado.
		Fecha-se os parênteses.
		Coloca-se o ponto-e-vírgula.
	
		- Comando: \n no final do texto do printf serve para quebrar linha

		- Nome de variáveis:
		1) Nunca utilizar números no inicio;
		2) Nunca coloca-se caracteres especiais;
		3) Nunca coloca-se espaço em branco;
		4) Deve-se iniciar com uma letra do Alfabeto ou o caractere especial Underline (_);
		5) Nunca utiliza-se palavra reservada da linguagem. Ex: (printf);

	*/


	printf("O valor é: %i\n", 245);
	
	printf("O valor é: %i - %i - %i - %i\n", 156, 34, 68, 10);

	printf("Nome: %s", "Lucas Furtado Souza");

} //Fim do programa principal