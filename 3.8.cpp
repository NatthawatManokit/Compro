#include <stdio.h>

int main()
{

	int array[10];
	int num ;
	printf("Input the number of element Arrat1 :\n") ;
	scanf("%d", &num) ;
	printf("----\n") ;
	for(int i=1 ; i<=num ; i++){
		printf("Input [%d] :\n", i) ;
		scanf("%d", &array[i]) ;
	}
	printf("----\n") ;
	printf("Array1 =") ;
	for(int j=1 ; j<=num ; j++){
		printf(" %d", array[j]) ;
	}
	printf("\n-----\n") ;
	for(int k=1 ; k<4 ; k++){
		printf("Input new value [%d] : \n", k) ;
		scanf("%d", &array[k+num]) ;
	}

	printf("----\n") ;
	printf("Array1 = ") ;
	for(int h=1 ; h<=num+3 ; h++){
		printf("%d", array[h]) ;
		if(h < (num+4)-1)
		    printf(" ");
		else
		    printf("\n");
	}
	
    return 0;
}
