#include <stdio.h>

int main()
{
    int days, sec ;
	printf("Input Days :\n") ;
	scanf("%d",&days) ;
	sec = days*86400 ;
	printf("%d days = %d seconds\n",days ,sec);
    return 0;
}

