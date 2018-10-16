#include <stdio.h>

int main()
{
	
	float input ;
	printf("Input :\n") ;
	scanf("%f", &input) ;
	printf("----\n") ;
	printf("%.0f degree Celsius = %.1f degree Fahrenheit\n", input, (1.8*input)+32) ;

    return 0;
}
