#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdint.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) { //configura��es iniciais
	setlocale (LC_ALL, ""); //configura para uso de caratcteres especiais e acentos
	
	int valor; //declara variavel do tipo int
	char caract; //declara vari�vel do tipo char
	float flutuante; //declara vari�vel do tipo float
	double dobro; //declara vari�vel do tipo double
	
	printf ("\n\n\nARQUITETURA E ORGANIZA��O DE COMPUTADORES\n\n\n"); //Cabe�alho do programa
	printf ("DESENVOLVIDO POR: JULIANA PIRES\n"); //Nome do Dev
	
	printf ("\nS�o reservado %d bytes para vari�vel tipo int.\n", sizeof(valor)); // Imprime na tela valor de mem�ria para esse tipo de vari�vel utilizando a instru��o sizeof
	printf ("\nS�o reservado %d bytes para vari�vel tipo float.\n", sizeof(flutuante)); // Imprimena tela valor de mem�ria para esse tipo de vari�vel utilizando a instru��o sizeof
	printf ("\nS�o reservado %d bytes para vari�vel tipo double.\n", sizeof(dobro)); // Imprimena tela valor de mem�ria para esse tipo de vari�vel utilizando a instru��o sizeof
	printf ("\nS�o reservado %d bytes para vari�vel tipo char.\n", sizeof(caract)); // Imprimena tela valor de mem�ria para esse tipo de vari�vel utilizando a instru��o sizeof
	
	valor=10; //atribui � vari�vel valor o n�mero inteiro 10
	flutuante=10.00; //atribui � vari�vel flutuante o valor 10.00
	dobro=10.00; //atribui � vari�vel double o valor de 10.00
	caract ='A'; // atribui � vari�vel tipo char o caractere A
	
	printf ("\nO valor da vari�vel tipo int � %d e seu endere�o � %d\n", valor, &valor); // Imprime o valor da vari�vel e o seu devido endere�o
	printf ("\nO valor da vari�vel tipo float � %.2f e seu endere�o � %d\n", flutuante, &flutuante); // Imprime o valor da vari�vel e o seu devido endere�o
	printf ("\nO valor da vari�vel tipo double � %.2lf e seu endere�o � %d\n", dobro, &dobro); // Imprime o valor da vari�vel e o seu devido endere�o
	printf ("\nO valor da vari�vel tipo char � %c e seu endere�o � %d\n", caract, &caract); // Imprime o valor da vari�vel e o seu devido endere�o
	
	int is_big_endian(void)	
	{
							
    union { //faz uni�o de dois tipos de variaveis
        uint32_t i; //vari�vel tipo int (4 bytes)
        char c[4]; // sendo armazenada e distribuida em uma string (4 char's, sendo cada char 1 byte)
    } e = { 0x01000000 }; // vari�vel e � o nome da vari�vel tipo union, est� sendo atribuido a ela um valor

    return e.c[0]; // retorna verdadeiro ou falso (0 ou 1) est� e.c pois as duas variaveis est�o armazenadas no mesmo espa�o de mem�ria
	}

		printf ("\nO sistema � do tipo %s-endian.\n", is_big_endian() ? "big":"little"); //imprime o modo de armazenamento e testa para saber qual � if 1� byte = 0 imprime big, else imprime little
	
	
	return 0;
}
