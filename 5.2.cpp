#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int number, Value ;
	FILE *fp ;
	fp = fopen("a.txt", "r" ) ;
	if(fp == NULL){
		printf("Can't open file!'") ;
		exit(0) ;
	}
	fscanf(fp,"%d", &Value) ;
	
	printf ("Read File to A !\n") ;
	printf ("Input from User to B :\n") ;
		scanf("%d", &number) ;
	printf ("----\n") ;
	printf("Answer = %d\n", number+Value) ;
	
	return 0 ;
}
