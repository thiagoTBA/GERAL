#include<stdio.h>
#include<stdlib.h>


main(){

  int vetor[3],imaior;
  int i=0,soma=0;
  
  for(i=1 ; i <= 3 ; i++){
  	printf("Digite o um numero");
  	scanf("%d",&vetor[i]);
  }
 
  imaior = vetor[1];
  for(i=2 ; i <= 3 ; i++){
  	if(vetor[i]>imaior){
  		imaior = vetor[i];
	  }
  	
  }
  
 printf("MAIORRRRRRRRRR %d",imaior);
 


}
