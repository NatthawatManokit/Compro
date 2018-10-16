#include <stdio.h>

int main()
{
	int array1[10], array2[10];
	int count=0 ;
	for(int i=0 ; i<10 ; i++){
		printf("Input value to Array1 [%d] :\n", i) ;
		scanf("%d", &array1[i]) ;
		count++ ;
	if(array1[i] == -1){
		count-- ;
		break ;
		}
	}
	for(int j=0 ; j<10 ; j++){
		array2[j] = array1[j] ;
	}
	printf("----\n") ;
	printf("Copy Data from Array1 to Array2\n") ;
	printf("Array2 = ") ;
	for(int k=0 ; k<count ; k++){
		printf("%d", array2[k]) ;
	if(k < count-1)
	    printf(" ");
	else
	    printf("\n");
	}
	
    return 0;
}
