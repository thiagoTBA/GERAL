#include<stdio.h>
#include<stdlib.h>

int main()
{
    float TamArq,velocidade,conversao, tempo;

    printf("Digite o tamanho do arquivo em MB: ");
    scanf("%f",&TamArq);
    printf("Digite a velocidade da conexao ");
    scanf("%f",&velocidade);
    conversao = TamArq *1024*1024 ;
    printf("O tempo necessario e");
    
    getch();
    return 0;
}
