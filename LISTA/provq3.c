#include<stdio.h>
#include<stdlib.h>


main(){
	int a,b,c;
	
	scanf("%d",&a);
	b=a*a;
	c=0;
	
	do{
		b=b-c;
		if(b<a)
		break;
		else
		c=c+1;
		
		}while(b>a);
		printf("%d",c);
		
		return 0;
	
	
	
}
