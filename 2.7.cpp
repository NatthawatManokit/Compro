#include <stdio.h>

int main()
{
	int score ;
	printf("Input Raw Score :\n") ;
	scanf("%d", &score) ;
	printf("----\n") ;
	if(score>=80){
		printf("Grade A !\n") ;
	}
	else if(score>=75){
		printf("Grade B+ !\n") ;
	}
	else if(score>=70){
		printf("Grade B !\n") ;	
	}
	else if(score>=65){
		printf("Grade C+ !\n") ;
	}
	else if(score>=60){
		printf("Grade C !\n") ;
	}
	else if(score>=55){
		printf("Grade D+ !\n") ;
	}
	else if(score>=50){
		printf("Grade D !\n") ;
	}
	else if(score<=50){
		printf("Grade F !, Please try again next term.\n") ;
	}
	
    return 0;
}
