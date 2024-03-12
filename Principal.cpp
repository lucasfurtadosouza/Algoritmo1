/*
	Aula do dia: 11/03/2024
	Aprendemos PRINT e Defini��o de Vari�veis
*/
#include <cstdio>

//Fun��o principal
int main() { //In�cio do programa principal
	/*
		- Sintaxe:
		nome do comando em minusculo: printf
		Abre-se Par�nteses.
		Abre-se Aspas duplas.
		Coloca-se a mensagem desejada.
		%? (identificador de tipo de dado).
		Fecha-se Aspas Duplas.
		Coloca-se virgula.
		Coloca-se o dado a ser apresentado.
		Fecha-se os par�nteses.
		Coloca-se o ponto-e-v�rgula.
	
		- Comando: \n no final do texto do printf serve para quebrar linha

		- Nome de vari�veis:
		1) Nunca utilizar n�meros no inicio;
		2) Nunca coloca-se caracteres especiais;
		3) Nunca coloca-se espa�o em branco;
		4) Deve-se iniciar com uma letra do Alfabeto ou o caractere especial Underline (_);
		5) Nunca utiliza-se palavra reservada da linguagem. Ex: (printf);

	*/


	printf("O valor �: %i\n", 245);
	
	printf("O valor �: %i - %i - %i - %i\n", 156, 34, 68, 10);

	printf("Nome: %s", "Lucas Furtado Souza");

} //Fim do programa principal