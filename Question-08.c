// Write a program to compute the sum of all elements in an array using pointers.

#include<stdio.h>

int main ()
{
    int ary [20] ;
    int i , n , sum=0 ;
    int *p ;

    p = ary ;

    printf("Enter size of array : ");
    scanf("%d",&n);


    printf("Enter %d elements : ",n);

    for(i=0 ; i<n ; i++)
        scanf( "%d",(p+i) ) ;

    for (i=0 ; i<n ; i++)
        sum = sum + *(p+i) ;

    printf("Sum is %d",sum) ;

    return 0 ;
    
}
