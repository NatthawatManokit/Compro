#include <stdio.h>

int main()
{
    int Number, count = 0;
    
	printf("User Input :\n") ;
	scanf("%d",&Number);
	printf("-----\n") ;
	printf("%d =", Number) ;
	
	while(Number >= 1000){
		printf( " M" );
		Number = Number - 1000;
	}
	
	if(Number >= 900){
		printf( " C M" );
		Number = Number - 900;
	}
	
	if(Number >= 500){
		printf( " D" );
		Number = Number - 500;
	}
	
	if(Number >= 400 && Number < 500){
		printf( " C D" );
		Number = Number - 400;
	}
	
	while(Number >= 100){
		printf( "C " );
		Number = Number - 100;
	}
	
	if(Number >= 90){
		printf( " X C" );
		Number = Number - 90;
	}
	
	if(Number >= 50){
		printf( " L" );
		Number = Number - 50;
	}
	
	if(Number >= 40){
		printf( " X L" );
		Number = Number - 40;
	}
	
	while(Number >= 10){
		printf( " X" );
		Number = Number - 10;
	}
	
	if(Number >= 9){
		printf( " I X" );
		Number = Number - 9;
	}
	
	if(Number >= 5){
		printf( " V" );
		Number = Number - 5;
	}
	if(Number >= 4){
		printf( " I V" );
		Number = Number - 4;
	}
	while(Number >= 1){
		printf( " I" );
		Number = Number - 1;
	}
	printf ("\n") ;
    return 0;
}
