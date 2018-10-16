#include <stdio.h>
int main () {
	int num[10] ;
	int i, j=0 ;
	for( i=0 ; i<10 ; i++){
		printf("Input [%d] :\n", i) ;
		scanf("%d", &num[i]) ;
		j++ ;
	if(num[i] == -1){
		j--;
		break ;
		}
	}
	printf("----------\n") ;
	for( i=0 ; i<j ; i++){
		printf("%d", num[i]) ;
		if(i < j-1)
		    printf(" ");
		else
		    printf("\n");
	}
	return 0 ;
}
