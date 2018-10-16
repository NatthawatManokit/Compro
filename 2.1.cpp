#include <stdio.h>

int main()
{
    int n1,n2 ;
    printf("Input1 :\n") ;
    scanf("%d", &n1) ;
    printf("Input2 :\n") ;
    scanf("%d", &n2) ;
    printf("----\n") ;
    if(n1>n2 && n2<n1){
        printf("Number1 greater than Number2\n") ;
    }
    else if(n2>n1 && n1<n2){
        printf("Number1 lower than Number2\n") ;
    }
    else if(n1==n2 && n2==n1){
        printf("Number1 equal Number2\n") ;
    }
    return 0;
}
