#include<stdio.h>
#include<stdlib.h>

main(){
	
	float mediafil = 0,maiorsal,percenpess,mediasal = 0;
	int habit,i,f,soma;
	int salpop[50],filho[50];
	
	
	printf("ditite o numero de habitantes ; ");
	scanf("%d",&habit);
	
	
	for(i=1 ; i <= habit ; i++ ){
	printf("digite o salario do habitante ;%d \n",i);
	scanf("%d",&salpop[i]);	
	mediasal = mediasal+salpop[i];
	 }
	  
	mediasal= mediasal / habit;
	
	
	for(f=1 ; f <= habit ; f++ ){
	printf("Digite a quantidade de Filho(s) do habitante ;%d\n",f);
	scanf("%d",&filho[f]);	
	mediafil = mediafil+filho[f];
	 }
	 mediafil = mediafil/habit;
    
	for(i=1 ; i < habit ; i++){
  	if(salpop[i]<420){
  	 soma= soma + 1	;
	  }
  }	 

	maiorsal = salpop[1];
	for(i=2 ; i <= salpop[i] ;i++){
		if(salpop[i]>maiorsal){
			maiorsal = salpop[i];
		}
	}
	

	 printf("\nMEDIA SALARIOAL %.2f \n",mediasal);
	 printf("\nMEDIA DE FILHOS %.2f \n",mediafil);
	 printf("\nMAIOR SALARIO %.2f \n",maiorsal);
	 printf("\nPESSOAS COM SALARIOS ATE 420.00  %d \n",soma);
	 
	 
      for(i=1 ; i <= habit ; i++ ){
      printf("Posicao %d  salario %d   \n",i,salpop[i]);	
 }
}


