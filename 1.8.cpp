#include <stdio.h>

int main()
{
    int n1,n2,n3 ;
    printf("Input [1] :\n") ;
    scanf("%d", &n1) ;
    printf("Input [2] :\n") ;
    scanf("%d", &n2) ;
    printf("Input [3] :\n") ;
    scanf("%d", &n3) ;
    printf("----\n") ;
    if(n1>n2 && n1>n3){
        printf("%d %d %d\n", n1, n2, n3) ;
    }
    else if(n3>n1 && n3>n2){
        printf("%d %d %d\n", n3, n2, n1) ;
    }
    else if(n2>n1 && n1>n3){
        printf("%d %d %d\n", n2, n1, n3) ;
    }
    return 0;
}
