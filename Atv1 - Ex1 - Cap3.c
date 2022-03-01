#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	
	int Num;

    printf("Grupo Unis\n");
    printf("Sistemas Embarcados\n");
    printf("Aluno: Marlon Gabriel\n");
    printf("Exemplo 3.1\n");
    
    printf("Escreva um numero na base decimal: ");
    scanf("%d", &Num);
    
    printf("\n Numero %d na base octal: %o\n", Num,Num);
	printf("O numero %d na base hexadecimal: %x", Num,Num);
	
	getch();
}