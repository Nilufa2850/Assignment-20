//Write a program to calculate the length of the string using a pointer.

#include<stdio.h>
int main ()
{
    char str[20] ;

    printf("Enter a string : ");
    gets (str) ;

    int i ;
    char *p ;

    p = str ;                     // str ~ & str[0]

    for (i=0 ; *(p+i) ; i++);

    printf("Length is %d",i);
    return 0 ;

}
