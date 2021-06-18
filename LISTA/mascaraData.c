#include<stdio.h>
#include<conio.h> //compilei no dev C++ (Windows), mas aqui basta colocar uma biblioteca equivalente... conio ou ncurses
#include<string.h>

/****** PROTOTIPACÃO ******/


/********* Prog principal **********/
int main()
{
	char num;
	printf("digite uma data");
	scanf("%s",&num);
    char frase[] = "";  // string qualquer
    mascara(frase,"(##) ####-####");
}

/********* Funcão **********/
void mascara()
{
     char aux[100];
     int i = 0;
     
     while(num)
     {
        if(formato[i] != '#')
        {
           aux[i] = formato[i];
           i++;
        }
        else
        {
           aux[i] = *frase;
           frase++;
           i++;
        }
     }
     aux[i] = 0;

     printf("%s",aux);
     getch();
}
