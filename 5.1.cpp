#include <stdio.h>
#include <stdlib.h>

int main()
{
 	
 	char Input[10] ;
	FILE *fp ;
	fp = fopen("a.txt", "r" ) ;
	if(fp == NULL){
		printf("Can't open file!'") ;
		exit(0) ;
	}
	
	printf("Ouput :\n") ;
	for(int i=0 ; i<2 ; i++){
		if(fscanf(fp,"%s", Input) ==EOF )
			break ;
		printf("%s", Input) ;
	}

	fclose(fp) ;
    return 0;
}
