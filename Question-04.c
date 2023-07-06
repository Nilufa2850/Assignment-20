// Write a program in C to demonstrate how to handle the pointers in the program.

#include<stdio.h>
 
int main ()
{
    int x , *p , **q , ***r ;

    x = 10 ; 
    p = &x ;
    q = &p ;
    r = &q ;

    printf("%d %d %d %d \n",x,*p,**q,***r);
    printf("%d %d %d %d \n",&x,p,*q,**r);
    printf("%d %d %d \n",&p,q,*r);
    printf("%d %d \n",&q,r);
    printf("%d ",&r);

    return 0 ;
}
