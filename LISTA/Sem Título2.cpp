#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*faça um programa que carregue uma matriz 4x4 com numeros inteiros,execute as trocas
especificadas a seguir e mostre a matriz resultante
a diagonal principal com a diagonal secundario*/

main (){
	
	int matriz[50][50],linha,coluna;
	int x,y;
	
	printf("\nEntre com o numero de linhas =");
	scanf("%d",&linha);
	printf("\nEntre com o numero de colunas =");
	scanf("%d",&coluna);
	
	printf("\nEntre com o valores na matriz\n");
	for(x=1 ; x <= linha ; x++)
		for(y=1 ; y <= coluna ; y++){
			printf("\nlinha %d quadrado %d =",x,y);
			scanf("%d",&matriz[x][y]);
			
			
		}
		
	printf("***************RASTREIO********************");
	
	printf("\nLINHA DIGITADA =%d\n",linha);
	printf("\nCOLUNA DIGITADA =%d\n",coluna);
	
	for(x=1 ; x <= linha ; x++)
		for(y=1 ; y <= coluna ; y++){
			printf("\ncoluna %d quadrado %d \n",x,y,matriz[x][y]);
		
}
}
