#include <stdio.h>

int main()
{

	int array[10];
	int num, temp=0 ;
	printf("Input the number of element Arrat1 :\n") ;
	scanf("%d", &num) ;
	printf("----\n") ;
	for(int i=0 ; i<num ; i++){
		printf("User Input [%d] :\n", i) ;
		scanf("%d", &array[i]) ;
	}
	printf("----\n") ;
	printf("Array1 =") ;
	for(int j=0 ; j<num ; j++){
		printf(" %d", array[j]) ;
	}
	for(int k=0 ; k<num ; k++){
		for(int h=0 ; h<num ; h++){
			if(array[k]<array[h]){
				temp = array[k] ;
				array[k] = array[h] ;
				array[h] = temp ;
			}
	    }
	}
	printf("\nSort Array1 Ascending : ") ;
	for(int j=0 ; j<num ; j++){
		printf("%d", array[j]) ;
		    if(j<num-1)
		        printf(" ") ;
		  //  else
		    //    printf("\n") ;
	}
	
	printf("\n-----\n") ;
	for(int k=1 ; k<=3 ; k++){
		printf("Input new value [%d] : \n", k) ;
		scanf("%d", &array[k+num]) ;
	}

	printf("----\n") ;

	printf("Array1 = ") ;
	for(int k=0 ; k<=num+3 ; k++){
		for(int h=0 ; h<=num+3 ; h++){
			if(array[k]<array[h]){
				temp = array[k] ;
				array[k] = array[h] ;
				array[h] = temp ;
			}
	    }
	}
	for(int i=1 ; i<=num+3 ; i++){
		printf("%d", array[i]) ;
		    if(i<num+3)
		        printf(" ") ;
		    else
		        printf("\n") ;
	}
	
    return 0;
}
