#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){

	   int MarcaA, MarcaB, MarcaC;	

    printf("Grupo Unis\n");
    printf("Sistemas Embarcados\n");
    printf("Aluno: Marlon Gabriel\n");
    printf("Exemplo 2.1\n");
    
    printf("Digite a quantidade de chuteiras da marca A: ");
    scanf("%d", &MarcaA);
    printf("Digite a quantidade de chuteiras da marca B: ");
    scanf("%d", &MarcaB);
    printf("Digite a quantidade de chuteiras da marca C: ");
    scanf("%d", &MarcaC);
    
    printf("\nExistem %d chuteiras da marca A\n", MarcaA);
	printf("\nExistem %d chuteiras da marca B\n", MarcaB);
	printf("\nExistem %d chuteiras da marca C\n\n", MarcaC);
	
	printf("Existem %d chuteiras da marca A, %d da marca B, %d da marca C\n\n", MarcaA, MarcaB, MarcaC);
	
	printf("\t\t Quantidade de Chuteiras em Estoque\n");
	printf("\t\tMarca A \t Marca B \t Marca C\n");
	printf("\t\t   %d    \t    %d    \t     %d\n\n", MarcaA, MarcaB, MarcaC);
	
	getch();
}