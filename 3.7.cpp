#include <stdio.h>

int main()
{
	int array1[20], array2[20], array3[20] ;
	int num1, num2, temp=0 ;
	
	printf("Input element of Array1 :\n") ;
	scanf("%d", &num1) ;
	for(int i=0 ; i<num1 ; i++ ){
		printf("Array1 [%d] :\n", i) ;
		scanf("%d", &array1[i]) ;
	}
	
	for(int j=0 ; j<num1 ; j++){
		array3[j]=array1[j] ;
	}
	
	printf("Input element of Array2 :\n") ;
	scanf("%d", &num2) ;
	for(int i=0 ; i<num2 ; i++ ){
		printf("Array2 [%d] :\n", i) ;
		scanf("%d", &array2[i]) ;
	}
	
	
	for(int k=0 ; k<num1+num2 ; k++){
		array3[num1+k]=array2[k] ;
	}
	
	for(int l = 0 ; l<num1+num2 ; l++){
		for(int h = 0 ; h<num1+num2 ; h++){
			if(array3[l] > array3[h]) {
				temp = array3[l] ;
				array3[l] = array3[h] ;
				array3[h] = temp ;
			}
		}
	}
	
	printf("---------\n") ;
	printf("Merge Array1 & Array2\n") ;
	printf("Array3 : ") ;
	for(int x=0 ; x<num2+num1 ; x++){
		printf("%d", array3[x]) ;
		if(x < ((num1+num2)-1))
		    printf(" ");
		else
		    printf("\n");
	}
    return 0;
}

