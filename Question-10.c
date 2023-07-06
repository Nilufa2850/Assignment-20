// Write a program to print a string in reverse using a pointer.

#include <stdio.h>
#include<string.h>

int main ()
{
    char str [20] ;
    char *p ;
    int i , L ;

    p = str ;

    printf("Enter a string : ");
    gets(p);

    L = strlen(p) ;

    for (i=L ; i>=0 ; i--)
        printf("%c",*(p+i));

    return 0 ;

    
}
