#include <stdio.h>
#include <string.h>

int main()
{

	int array[10];
	int num, count=0 ;
	printf("Input number of element Array1 :\n") ;
	scanf("%d", &num) ;
	printf("----------\n") ;
	for(int i=0 ; i<num ; i++){
		printf("Input [%d] :\n", i) ;
		scanf("%d", &array[i]) ;
	}
	
	printf("------\n") ;
	printf("Array1 =") ;
	for(int j=0 ; j<num ; j++){
		printf(" %d", array[j]) ;
	}
	printf("\n------") ;
	
	for(int j=1 ; j<=2 ; j++){
		printf("\nEnter position to delete value :\n") ;
			scanf("%d", &count) ;
		printf("Delete Array1[%d] = %d\n", count, array[count]) ;
		printf("Now Array1 =") ;
			if(count>num){
				printf("Not Number") ;
			}
			else{
				for(int i=count ; i<=num-j ; i++){
						array[i] = array[i+1] ;
				}
				for(int i=0 ; i<num-j ; i++){
					printf(" %d", array[i]) ;
				}
			}
			printf("\n---") ;
	}
	printf("\n") ;
    return 0;
}
