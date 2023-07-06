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
