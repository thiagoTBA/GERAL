#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()

{

int A,B,C;
float D,R,S;

printf("Difite tres valores inteiros e positivos: ");
scanf("%d%d%d", &A,&B,&C);

R = pow(A+B,2);
S = pow(B+C,2);

D = (R+S)/2;

printf("O valor da Expressao e: %.2f", D);

getch();
return 0;
}
