#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
 	
 	char Input[10][10], sex[10][10]  ;
 	int age[20] ;
 	float number[20] ;
	FILE *fp ;
	fp = fopen("a.txt", "r" ) ;
	if(fp == NULL){
		printf("Can't open file!'") ;
		exit(0) ;
	}
	

	for(int i=0 ; i<=2 ; i++){
		if(fscanf(fp,"%s\t%d\t%f\t%s\n", Input[i], &age[i], &number[i], sex[i]) ==EOF ){
			break ;
		}
		printf("%s\t%d\t%.2f\t%s\n", Input[i], age[i], number[i], sex[i]) ;
	}

	fclose(fp) ;
    return 0;
}


