#include <stdio.h>

int main()
{
	float  j=0, sum=0 , num[20] ;
	for(int i=0 ; i<20 ; i++){
		printf("user input :\n") ;
		scanf("%f", &num[i]) ;
		j++ ;
	if(num[i] == -1){
		j--;
		break ;
		}
	sum = num[i] + sum ;
	}
	printf("----\n") ;
	printf("Sum = %.0f\n", sum) ;
	printf("Avg = %.2f\n", sum/j) ;
    return 0;
}
