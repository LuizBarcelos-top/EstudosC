#include <stdio.h>
#include <stdlib.h>

#define texto "Entrada e saida de dados. "
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("%s\n",texto);
	int idade = 0;
	float altura = 0.0;
	char nome[50]="";
	
	printf("Digite a idade:\n");
	scanf("%d", &idade);
	
	printf("Digite a altura:\n"); 
	scanf("%f", &altura);
	
	printf("Digite o nome:\n");
	scanf("%s", &nome);
	
	printf("Seu nome é %s,", nome);
	printf("você tem %d anos ", idade);
	printf("e mede %.2f. \n",altura);

	return 0;
}
