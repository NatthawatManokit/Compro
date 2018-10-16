#include <stdio.h>

char name[10] ;
int  age ;

int Output(char name[10], int age){
		printf("Name: %s (%d)\n", name, age) ;

}



int main(){	
	char namea[10], nameb[10] ;
	int agea, ageb ;
	
	printf("Input A\n") ;
	printf("----\n") ;
	printf("Name :\n") ;
		scanf("%s", namea) ;
	printf("Age :\n") ;
		scanf("%d", &agea) ;
	printf("\n") ;
	printf("Input B\n") ;
	printf("----\n") ;
	printf("Name :\n") ;
		scanf("%s", nameb) ;
	printf("Age :\n") ;
		scanf("%d", &ageb) ;
	printf("\n") ;
	printf("** RESULT **\n") ;
	Output(namea, agea) ;
	Output(nameb, ageb) ;
	printf("\n** SWAP AGE **\n") ;
	Output(namea, ageb) ;
	Output(nameb, agea) ;
	
	return 0 ;
}
