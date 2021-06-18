#include <stdio.h>
#include <conio.h>

int main (void) {
    int diaN, mesN, anoN, diaA, mesA, anoA, idade;
    
    printf(" Informe a sua data de nascimento na seguinte configuracao: dd/mm/aaaa\n");
    scanf("%d/%d/%d", &diaN, mesN, anoN);
    printf(" Informe a data atual na seguinte configuracao: dd/mm/aaaa\n");
    scanf("%d/%d/%d", &diaA, &mesA, &anoA);
    
    if ((mesN > mesA) || ((mesN = mesA) && (diaN > diaA)))
       idade = anoA - anoN - 1;
    else idade = anoA - anoN;
    
    printf("idade = %d", idade);
    getch();
    
}
