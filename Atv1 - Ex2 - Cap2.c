#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	
	int Lado, Area, Perimetro;

    printf("Grupo Unis\n");
    printf("Sistemas Embarcados\n");
    printf("Aluno: Marlon Gabriel\n");
    printf("Exemplo 3.2\n");
    
	printf("Digite o lado do quadrado em cm: ");
	scanf("%d", &Lado);
	
	Area = Lado * Lado;
	Perimetro = Lado*4;
	printf("\nA area do quadrado e: %d", Area);
	printf("\nO perimetro do quadado e: %d", Perimetro);
	
	getch();
}