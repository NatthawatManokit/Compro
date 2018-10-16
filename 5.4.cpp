#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    
	char name[20][20], sex[20][20] ;
	int age[20], count=0 ; 
	float score[20] ;
	
	FILE *fp ; 
	fp = fopen("a.txt","r") ;
	if ("a.txt" == NULL){
		printf ("Can't open !") ;
		exit (0) ;
	}
	for (int i=0 ; i<=2 ; i++){
		if(fscanf (fp,"%s %d\t%f\t%s", name[i], &age[i], &score[i], sex[i]) == EOF){
			break ;
		}
	}
	
	for (int i=0 ; i<=2 ; i++){
		if(count > 0)
			break ;
		for (int j=0 ; j<=2 ; j++){
			if(score[i] > score[i]){
				printf("%s, Grade %.2f\n", name[i], score[i]) ;
				count++ ;
				break ;
			}
		}
	}
	fclose (fp) ;
	
	return 0 ;
}
