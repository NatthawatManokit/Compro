#include <stdio.h>
int main () {
	int array[10];
	int num, temp = 0 , count = 0;
	printf("Input number of element to be store in array :\n") ;
	scanf("%d", &num) ;
	printf("-----\n") ;
	for(int i=1 ; i<=num ; i++){
		printf("Element[%d] :\n", i) ;
		scanf("%d", &array[i]) ;
	}
	printf("-----\n") ;

	for(int k=1 ; k<=num ; k++){
		for(int h=1 ; h<=num ; h++){
			if(array[k]<array[h]){
				temp = array[k] ;
				array[k] = array[h] ;
				array[h] = temp ;
			}
	    }
	}
	for(int y=1 ; y<=num ; y++){
		for(int x=1 ; x<=num ; x++){
			if(array[y]==array[x]){
				count ++ ;
			}
		}
		if(array[y] != array[y+1]){
		printf("%d -> %d\n", array[y], count) ;
		}
	count = 0 ;
	}
	
	return 0 ;
}
