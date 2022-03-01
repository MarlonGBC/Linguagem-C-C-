#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	
	int Num;

    printf("Grupo Unis\n");
    printf("Sistemas Embarcados\n");
    printf("Aluno: Marlon Gabriel\n");
    printf("Exemplo 2.2\n");
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &Num);
    printf("\n");
    printf("\tTabuada do %d\n\n", Num);
    printf("\t %d x 1 = %d\n", Num, Num*1);
    printf("\t %d x 2 = %d\n", Num, Num*2);
    printf("\t %d x 3 = %d\n", Num, Num*3);
    printf("\t %d x 4 = %d\n", Num, Num*4);
    printf("\t %d x 5 = %d\n", Num, Num*5);
    printf("\t %d x 6 = %d\n", Num, Num*6);
    printf("\t %d x 7 = %d\n", Num, Num*7);
    printf("\t %d x 8 = %d\n", Num, Num*8);
    printf("\t %d x 9 = %d\n", Num, Num*9);
    printf("\t %d x 10 = %d\n", Num, Num*10);
    
    getch();
}