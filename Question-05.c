// Write a program to find the maximum number between two numbers using a pointer

#include<stdio.h>
int max (int* , int*);

int main ()
{
    int a , b ;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);

    printf("Maxium number is %d",max(&a,&b));

    return 0 ;
}

int max (int* p , int *q)
{
    if (*p > *q)
        return *p ;
    else 
        return *q ;
}

// .......................................2nd method .............................................

int main ()
{
    int a , b , *p , *q ;

    p = &a ;
    q = &b ;

    printf("Enter two numbers : ");
    scanf("%d%d",p,q);

    if (*p > *q)
        printf("maximum number is %d",*p);
    else 
        printf("maximum number is %d",*q);


    return 0 ;
}
