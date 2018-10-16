#include <stdio.h>

int num1, num2, num3, sum ;

int summation(int num1, int num2, int num3, int sum){
	sum = num1+num2+num3 ;
	printf("Summation = %d (Calculate by Additional Function)", sum) ;
}

int main(){
	int num1, num2, num3 ;
	
	printf("Input 1 :\n") ;
		scanf("%d", &num1) ;
	printf("Input 2 :\n") ;
		scanf("%d", &num2) ;
	printf("Input 3 :\n") ;
		scanf("%d", &num3) ;
	printf("\n----\n") ;
	summation(num1,num2,num3,sum) ;
	
	return 0 ;
}
