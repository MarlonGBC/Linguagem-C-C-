#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	
	int Total, Susp, Mort, Conf;

    printf("Grupo Unis\n");
    printf("Sistemas Embarcados\n");
    printf("Aluno: Marlon Gabriel\n");
    printf("Exemplo: 1.4\n\n");
    
    printf("Preencha com as seguintes informacoes sobre a Dengue em Minas Gerais: \n\n");
    printf("\tCasos Suspeitos: ");
    scanf("%d", &Susp);
    printf("\tCasos Confirmados: ");
    scanf("%d", &Conf);
    printf("\tQuantidade de Mortos: ");
    scanf("%d", &Mort);
    
    system("cls");
    
    printf("\n");
    printf("\tInformacoes sobre a dengue em Minas Gerais:\n");
    printf("\tCasos Suspeitos: %d\n", Susp);
    printf("\tCasos Confirmado: %d\n", Conf);
    printf("\tQuantidade de Mortes %d\n", Mort);
    Total =  Susp + Conf + Mort;
    printf("\tTotal de Dados: %d\n\n", Total);
    
    getch();
}