#include<stdio.h>
#include<stdlib.h>


main(){

  int vetor[3],soma;
  int i ;
  
  for(i=0 ; i < 3 ; i++){
  	printf("Digite o um numero");
  	scanf("%d",&vetor[i]);
  }
 
  
  for(i=0 ; i < 3 ; i++){
  	if(vetor[i]<420){
  	 soma= soma+1	;
	  }
  }
  
      printf("SOMAAAAAA   %d   \n",soma);
       for(i=0 ; i < 3 ; i++ ){
      printf("Posicao %d  VALOR %d   \n",i,vetor[i]);	
 }
 


}
