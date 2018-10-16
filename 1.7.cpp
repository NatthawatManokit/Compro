#include <stdio.h>

int main()
{	
	float input, salary, zero=0 ;
	char id[20] ;
	printf("Input the Employees ID(Max. 10 chars):\n") ;
		scanf("%s", id) ;
		
	printf("Input the working hrs:\n") ;
		scanf("%f", &input) ;
		
	printf("Salary amount/hr:\n") ;
		scanf("%f", &salary) ;
		
	printf("----\n") ;
	
	printf("Expected Output:\n") ;
	
	printf("Employees ID = %s\n", id) ;
	
	printf("Salary = U$ %0.0f,%0.0f%0.0f%0.2f \n", input*salary/1000, zero, zero, zero/100) ;
	
    return 0;
}
