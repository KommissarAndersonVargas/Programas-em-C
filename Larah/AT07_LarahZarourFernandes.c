#include <stdio.h>
#include <string.h>
#include <locale.h>
//Desenvolvido por Larah Zarour Fernandes
//Dia 12/05/2022

int main() {
	// declarando variaveis
	int testPalindrome;
	int lente;
	int a; 
	int b; 
	char string[50], stringContrario[50];
	
	setlocale (LC_ALL, "PORTUGUESE");
	
	printf("Digite uma string para verificar um possive Palindromo:"); //usuario insere a string
	

	gets(string);  //o gets recebe a string e armazena
	
	//a contagem de strings é feeita pela função strlen e é recebida atráves do usuario
	lente = strlen(string);
	
	//aqui a palavra inserida é espelhada
	for (a = lente -1, b = 0; a >= 0; a--, b++){ 
		stringContrario [b] = string [a]; 
	} 
	
	testPalindrome = strcmpi(string, stringContrario); //aqui a palavra é comparada pela função strcmpi
	
	//aqui ocorre a comparação, caso for true e a palavra for um palindromo irá retornar 1, caso não for irá retornar 0
	if (testPalindrome == 0){
		printf("Resultado: 1 - Palindromo");
	}
	else {
		printf("Resultado: 0 - Nao eh Palindromo");
	}
	printf("\n\nMeu nome é Larah Zarour Fernandes");
	return 0;
}
