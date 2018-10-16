#include <stdio.h>

int main()
{
    int n ;
    printf("Input :\n") ;
    scanf("%d", &n) ;
    printf("----\n") ;
    if(n>=0){
        printf("Positive\n") ;
    }
    else if(n<0){
        printf("Negative\n") ;
    }
    return 0;
}
