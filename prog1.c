//Code for own mathematical function
//
//Header files
#include <stdio.h>
#include <stdlib.h>
#include "mymath.h"

int main(void){
	int first,second,result1,result2;
	printf("\n Enter first Number=\t");
	scanf("%d",&first);
	printf("\n Enter Second Number=\t");
	scanf("%d",&second);
	result1=myadd(first,second);
	result2=mysub(first,second);
	printf("\n%d	+	%d=%d\n",first,second,result1);
	printf("\n%d	-	%d=%d\n",first,second,result2);
	//return
	return(EXIT_SUCCESS);
}//end of main
