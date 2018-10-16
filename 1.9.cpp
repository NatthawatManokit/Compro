#include <stdio.h>

int main()
{
	int input ;
	printf("User Input :\n") ;
	scanf("%d", &input) ;
	char *number[] = {
						"one" , "two" , "three" , "four" , "five" ,
						"six" , "seven" , "eigh" , "nine" , "ten" ,
						"eleven" , "twelve" , "thirteen" , "fourteen" , "fifteen" ,
						"sixteen" , "seventeen" , "eighteen" , "nineteen" , "twenty" ,
						"twenty-one" , "twenty-two" , "twenty-three" , "twenty-four" , "twenty-five" ,
						"twenty-six" , "twenty-seven" , "twenty-eight" , "twenty-nine" , "thirty" 
					} ;
	printf("Result : %s\n", number[input-1]) ;
    return 0 ;
}
