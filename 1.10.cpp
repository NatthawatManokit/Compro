#include <stdio.h>

int main()
{
    int input ;
    printf("Input :\n") ;
    scanf("%x", &input) ;
    if(input==0){
    	putchar('0') ;
	}
	char buffer[40] ;
	char *sum = buffer + 32 ;
	*sum = 0 ;
	while(input){
		--sum ;
			if(input & 1) *sum = '1' ;
			else *sum = '0' ;
			input >>= 1 ;
	}
    printf("Output : %s\n", sum) ;
    return 0;
}
