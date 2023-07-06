// Write a program to print the elements of an array in reverse order.

#include<stdio.h>

int main ()
{
    int ary [20] ;
    int i , n  ;
    int *p ;

    p = ary ;

    printf("Enter size of array : ");
    scanf("%d",&n);


    printf("Enter %d elements : ",n);
    for(i=0 ; i<n ; i++)
        scanf( "%d",(p+i) ) ;

    
    printf("Reverse order : ");
    for (i=n-1 ; i>=0 ; i--)
        printf("%d ",*(p+i)) ;


    return 0 ;
    
}
