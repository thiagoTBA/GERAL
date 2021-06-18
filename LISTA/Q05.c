#include<stdio.h>
#include<conio.h>


Int main ()
{
float compras;
char nome;
int i;

for (i=0; i <15; i++)
{
     printf ("entre com o nome");
     scanf ("%c",&nome);
}
for (i=0; i <15; i++)
{
      printf ("entre com o valos das suas compras");
      scanf ("%f",&compras);
}
       for (i=0; i <15; i++)
{ 
      if (compras<=1000)
{ 
      bonus=(compras)*10/100;
     printf ("bônus=%f",bonus);
}
      if (compras > 1000)
{ 
       bonus=(compras)*15/100;
       printf ("bônus=% f", bonus);
}
