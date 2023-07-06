// Write a function to swap strings of two char arrays of calling functions. (TSRS)

#include<stdio.h>
#include<string.h>

void swap (char **p , char **q);

int main ()
{
    char *str1[10] , *str2[10] ;


    printf("Enter 1st string : ");
    gets(str1) ;

    printf("Enter 2nd string : ");
    gets(str2) ;

    swap (&str1 , &str2);

    printf("%s",str1) ;
    printf("\n%s",str2) ;

    return 0 ;
}

void swap (char **p , char **q)
{
    char *temp ;

    temp = *p ;
    *p = *q ; 
    *q = temp ;
}
