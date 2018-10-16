#include <stdio.h>
#include <string.h>

char word[20] ;
int Reverse(char word[20]){
	
	printf("Input :\n") ;
		scanf("%[^\n]s", word) ;
	
	printf("Reverse :\n") ;
for (int i = strlen(word)-1 ; i>=0 ; i-- ){
		printf ("%c",word[i]) ;
	}
	printf ("\n") ;
}

int main(){
	
	Reverse(word) ;
	
	return 0 ;
}
