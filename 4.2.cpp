#include <stdio.h>
#include <string.h>

struct information{
	char Name[20] ;
	float Score ;
} ;


int main(){
	struct information data[10] ;
	int	asci = 65 ;
	float temp ;
	char tempstudent[20] ;
	
	for(int i=0 ; i<4 ; i++){

		printf("Student %c\n", asci) ;
		printf("----\n") ;
		printf("Name :\n") ;
			scanf("%s", data[i].Name) ;
		printf("Score :\n") ;
			scanf("%f", &data[i].Score) ;
		asci++ ;
		printf("\n") ;
	}
	for (int i = 0 ; i < 4 ; i++){
		for (int j = 0 ; j < 4 ; j++){
			if (data[i].Score > data[j].Score) {
				
				strcpy(tempstudent,data[i].Name) ;
				strcpy(data[i].Name,data[j].Name) ;
				strcpy(data[j].Name,tempstudent) ;
				
				temp = data[i].Score ;
				data[i].Score = data[j].Score ;
				data[j].Score = temp ;
			}
		}
	}
	printf ("----------\n") ;
	for (int i = 0 ; i < 4 ; i++){
		printf ("%s",data[i].Name) ;
		if(i < 3)
		    printf (" ") ;
	}
	printf ("\n") ;
	for (int i = 0 ; i < 4 ; i++){
		printf ("%.2f",data[i].Score) ;
		if(i < 3)
		    printf (" ") ;
		else
		    printf ("\n") ;
	}
	
	return 0 ;
}

