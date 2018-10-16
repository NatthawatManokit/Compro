#include <stdio.h>

int main()
{
	int Number ;
	printf("Input :\n") ;
	scanf("%d", &Number) ;
	if(Number<=0){
		printf("Result : %d\n", Number*-1) ;
	}
	else if(Number>=0){
		printf("Result : %d\n", Number) ;
	}

    return 0;
}
