#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdint.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) { //configurações iniciais
	setlocale (LC_ALL, ""); //configura para uso de caratcteres especiais e acentos
	
	int valor; //declara variavel do tipo int
	char caract; //declara variável do tipo char
	float flutuante; //declara variável do tipo float
	double dobro; //declara variável do tipo double
	
	printf ("\n\n\nARQUITETURA E ORGANIZAÇÃO DE COMPUTADORES\n\n\n"); //Cabeçalho do programa
	printf ("DESENVOLVIDO POR: JULIANA PIRES\n"); //Nome do Dev
	
	printf ("\nSão reservado %d bytes para variável tipo int.\n", sizeof(valor)); // Imprime na tela valor de memória para esse tipo de variável utilizando a instrução sizeof
	printf ("\nSão reservado %d bytes para variável tipo float.\n", sizeof(flutuante)); // Imprimena tela valor de memória para esse tipo de variável utilizando a instrução sizeof
	printf ("\nSão reservado %d bytes para variável tipo double.\n", sizeof(dobro)); // Imprimena tela valor de memória para esse tipo de variável utilizando a instrução sizeof
	printf ("\nSão reservado %d bytes para variável tipo char.\n", sizeof(caract)); // Imprimena tela valor de memória para esse tipo de variável utilizando a instrução sizeof
	
	valor=10; //atribui à variável valor o número inteiro 10
	flutuante=10.00; //atribui à variável flutuante o valor 10.00
	dobro=10.00; //atribui à variável double o valor de 10.00
	caract ='A'; // atribui à variável tipo char o caractere A
	
	printf ("\nO valor da variável tipo int é %d e seu endereço é %d\n", valor, &valor); // Imprime o valor da variável e o seu devido endereço
	printf ("\nO valor da variável tipo float é %.2f e seu endereço é %d\n", flutuante, &flutuante); // Imprime o valor da variável e o seu devido endereço
	printf ("\nO valor da variável tipo double é %.2lf e seu endereço é %d\n", dobro, &dobro); // Imprime o valor da variável e o seu devido endereço
	printf ("\nO valor da variável tipo char é %c e seu endereço é %d\n", caract, &caract); // Imprime o valor da variável e o seu devido endereço
	
	int is_big_endian(void)	
	{
							
    union { //faz união de dois tipos de variaveis
        uint32_t i; //variável tipo int (4 bytes)
        char c[4]; // sendo armazenada e distribuida em uma string (4 char's, sendo cada char 1 byte)
    } e = { 0x01000000 }; // variável e é o nome da variável tipo union, está sendo atribuido a ela um valor

    return e.c[0]; // retorna verdadeiro ou falso (0 ou 1) está e.c pois as duas variaveis estão armazenadas no mesmo espaço de memória
	}

		printf ("\nO sistema é do tipo %s-endian.\n", is_big_endian() ? "big":"little"); //imprime o modo de armazenamento e testa para saber qual é if 1º byte = 0 imprime big, else imprime little
	
	
	return 0;
}
