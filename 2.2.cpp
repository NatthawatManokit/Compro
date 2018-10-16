#include <stdio.h>

int main()
{
    int N ;
    printf("Input :\n") ;
    scanf("%d", &N) ;
    printf("----\n") ;
    if(N%2 == 0){
        printf("%d is an even integer\n", N) ;
    }
    else if(N%2 != 0){
        printf("%d is an odd integer\n", N) ;
    }
    return 0;
}
