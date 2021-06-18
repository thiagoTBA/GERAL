#include <conio.h>
#include <stdlib.h>


main(){
	
	float mediasal,soma,mediaf,somaf,maiorsal;
	int habita,somam = 0;
	int s,f,sala[50],filho[50];
	
	printf("digite o numero de habitantes ; ");
	scanf("%d",&habita);
	
	for(s=1 ; s <= habita ; s++){
		printf("Digite o %dº salario\n ",s);
		scanf("%d",&sala[s]);
        soma = soma+sala[s];
	}
	for(f=1 ; f <= habita ; f++){
		printf("Digite o numero de filhos do habitante numero %d \n ",f);
		scanf("%d",&filho[f]);
        somaf=somaf +filho[f]; 
	}
	
	maiorsal=sala[1];
	for(s=2; s <= sala[s] ; s++){
		if(sala[s]>maiorsal){
			maiorsal = sala[s];
		}
	}
	mediasal=sala[1];
	for(s=2; s <= sala[s] ; s++){
		if(sala[s]>mediasal ){
			if(mediasal < 420){
				somam = somam+1;
			}
    s++;
	}
}
    
    
	
	mediasal = soma/habita;
	printf("MEDIA SALARIAL DOS HABITANTES  %.2f\n",mediasal);
	mediaf = somaf/habita;
	printf("MEDIA DE FILHOS %.2f\n",mediaf);
	printf("MAIOR SALARIO %.2f\n",maiorsal);
	

//rastreio
        for(s=1 ; s <= habita ; s++){
		printf("POSICAO %d VALOR %d \n",s,sala[s]);
	}
        for(f=1 ; f <= habita ; f++){
		printf("POSICAO %d VALOR %d \n",f,filho[f]);
	}
	    printf("VALOR DA SOMA %d",somam);
	
	
}
