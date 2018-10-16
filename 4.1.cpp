#include <stdio.h>
#include <string.h>

typedef struct {
    char  Name[20] ;
    int   Age ;
    char   Sex ;
    float Score ;
}data ;

int main(){
	
	data person1 , person2 ;
	
	printf("Person A\n") ;
	printf("----\n") ;
	printf ("Name :\n") ;
	scanf ("%s", person1.Name) ;
	printf ("Age :\n") ;
	scanf ("%d", &person1.Age) ;
	printf("Sex :\n") ;
	scanf("%s", &person1.Sex) ;
	printf("Score :\n") ;
	scanf("%f", &person1.Score) ;
	
	printf("\n") ;
	
	printf("Person B\n") ;
	printf("----\n") ;
	printf("Name :\n") ;
	scanf ("%s", person2.Name) ;
	printf ("Age :\n") ;
	scanf ("%d", &person2.Age) ;
	printf("Sex :\n") ;
	scanf("%s", &person2.Sex) ;
	printf("Score :\n") ;
	scanf("%f", &person2.Score) ;
	
	printf("\n") ;
	
	printf("--------\n") ;
	
	printf("\n") ;
		
	printf("--| Person A Information |--\n") ;
	
	printf ("Name : %s (%c)\n", person1.Name, person1.Sex) ;
	printf("Age : %d years old\n", person1.Age) ;
	printf("Score : %.2f points\n", person1.Score) ;
	
	printf("\n") ;
	
	printf("--| Person B Information |--\n") ;
	
	printf ("Name : %s (%c)\n", person2.Name, person2.Sex) ;
	printf("Age : %d years old\n", person2.Age) ;
	printf("Score : %.2f points\n", person2.Score) ;
	
    return 0;
}
