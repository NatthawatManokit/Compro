#include <stdio.h>
int main (){
	int number[20] ;
	int count=0, temp ;
	for( int i = 0 ; i < 20 ; i++ ){
		printf( "Input :\n") ;
		scanf( "%d", &number[i] ) ;
		count++ ;
	  	if( number[i] == -1 ){
		count-- ;
		break ;
		}
	}
	printf("----\n") ;
	
	for(int i=0 ; i<count ; i++){
		for(int j=0 ; j<count ; j++){
			if(number[i]<number[j]){
				temp = number[i] ;
				number[i] = number[j] ;
				number[j] = temp ;
			}
	    }
	}
	
	for(int l = 0 ; l < count ; l++){
			printf("%d", number[l]) ;
		if(l < count-1)
		    printf(" ");
		else
		    printf("\n");
	}

	for(int i=0 ; i<count ; i++){
		for(int j=0 ; j<count ; j++){
			if(number[i]>number[j]){
				temp = number[i] ;
				number[i] = number[j] ;
				number[j] = temp ;
			}
	    }
	}
	
	for(int k = 0 ; k < count ; k++){
		printf("%d", number[k]) ;
		if(k < count-1)
		    printf(" ");
		else
		    printf("\n");
	}
	return 0 ;
}
