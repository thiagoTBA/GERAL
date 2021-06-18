#include <stdio.h>

int processo (int a)

{
	if(a%2==0){
	  printf("VALOR DIGITADO PAR");
	  
	  
	  }else
	   printf("VALOR DIGITADO IMPAR");
      
 }


main () {
	
    int num;
	printf("\n\nVERIFICA SE UM NUMERO E PAR OU IMPAR\n\n");
    
    printf("Digite um numero\n ");
    scanf("%d",&num);
    processo(&num);
	
}
