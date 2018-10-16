#include <stdio.h>

int array[10] ;
int num, temp=0, count=0 ;

void Input(){
	printf("Input the element of Array1 :\n") ;
	scanf("%d", &num) ;
	printf("-------\n") ;
	for(int i=1 ; i<=num ; i++){
		printf("Element [%d] :\n", i) ;
		scanf("%d", &array[i]) ;
	}
}

void Output(){
	printf("-------\n") ;
	printf("Array1 =") ;
	for(int i=1 ; i<=num ; i++){
		printf(" %d", array[i]) ;
	}
	for(int i=1 ; i<=num ; i++){
		for(int j=1 ; j<=num ; j++){
			if(array[i]>array[j]){
				temp = array[i] ;
				array[i] = array[j] ;
				array[j] = temp ;
			}
	    }
	}
	printf("\nthe large 3rd element = %d\n", array[3]) ;
}

int main(){

	Input() ;
	Output() ;
	
	return 0 ;
}
