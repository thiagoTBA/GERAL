#include<stdio.h>
#include<stdlib.h>

int main()
{
    int razao, termo, PA;

    printf("Digite a razao da PA: ");
    scanf("%d", &razao);
    printf("Digite o primeiro termo: ");
    scanf("%d", &termo);

    PA = termo+(11-1)*razao;

    printf("O decimo primeiro termo da PA e: %d", PA);

    getch();
    return 0;
}
