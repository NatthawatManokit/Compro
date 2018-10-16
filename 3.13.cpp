#include <stdio.h>

int main(){
	
	int array[10][10], arraytran[10][10] ;
	int num1, num2 ;
	
	printf("Input Element of 2D Array1:\n") ;
		scanf("%d %d", &num1, &num2) ;
	printf("----\n") ;
	
	for(int i=0 ; i<num1 ; i++){
		for(int j=0 ; j<num2 ; j++){
			printf("Input [%d][%d] :\n", i, j) ;
			scanf("%d", &array[i][j]) ;
		}
	}
	printf("----\n") ;
	printf("Array1\n") ;
	for(int i=0 ; i<num1 ; i++){
		for(int j=0 ; j<num2 ; j++){
			printf("%d ", array[i][j]) ;
		}
	printf("\n") ;	
	}
	for(int i=0 ; i<num1 ; i++){
		for(int j=0 ; j<num2 ; j++){
			arraytran[j][i] = array[i][j] ;
		}
	}
	printf("\nArray1 Transpose\n") ;
	for(int i=0 ; i<num2 ; i++){
		for(int j=0 ; j<num1 ; j++){
			printf("%d ", arraytran[i][j]) ;
		}
	printf("\n") ;
	}
	
	return 0 ;
}
