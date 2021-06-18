#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


main (){
	
	int matriz [30][30];
	int x,y;
	
	printf("PREENCHA A MATRIZ\n");
	
	
	 for(x=1 ; x<=2 ; x++)
	    for(y=1 ; y<=2 ; y++){
	 	 printf("\nLinha %d coluna %d =",x,y);
	 	 scanf("%d",&matriz[x][y]);
	 }
	
	
	printf("***************RASTREIO********************");
	
	for(x=1 ; x<=2 ; x++)
	    for(y=1 ; y<=2 ; y++){
	 	printf("\nlinha %d coluna %d = %d \n",x,y,matriz[x][y]);
	 	
	 }
	
	
}
