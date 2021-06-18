#include<conio.h>
#include<stdio.h>

int main()
{
   float salarioLiquido,VlHora,numAula,descINSS,QTDhora;
    float Calculodashoras,Calculo,Calculo2,Calculo3;
    printf("Digite o valor da Hora Aula: ");
    scanf("%f", &VlHora);
    printf("Digite a quantidade de horas: ");
    scanf("%f",&QTDhora);
    printf("Digite o numero de aula no mes: ");
    scanf("%f", &numAula);
    printf("Entre com o desconto do INSS: ");
    scanf("%f", &descINSS);

    Calculodashoras = (QTDhora/30);
    Calculo = Calculodashoras*numAula;
    Calculo2 = Calculo*VlHora;
    Calculo3 = (Calculo2*descINSS)/100;

    printf(" Calculo das horas: %f",Calculo);
    printf("\n Quantidade de horas por dia: %f",Calculodashoras);
    printf("\n Total das horas:  R$ %.2f",Calculo2);
    printf("\n Salario Liquido com desconto do INSS: R$ %.2f",Calculo2-Calculo3);
    getch();
    return 0;
}
