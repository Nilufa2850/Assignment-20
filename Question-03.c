// Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]

#include<stdio.h>
void sort (int *b ,int n ) ;

int main ()
{
    int A[10] ;
    int i ;
    printf("Enter 10 values : ");
    for(i=0 ; i<10 ; i++)
        scanf("%d",&A[i]);

    sort (A,10);

    for(i=0 ; i<10 ; i++)
        printf("%d ",A[i]);

}

void sort (int *b ,int n )
{
    int i , j , temp ;

    for(i=0 ; i<9 ; i++)

        for(j=i+1 ; j<10 ; j++)

            if (b[i] > b[j])    
            {
                temp = b[i] ;
                b[i] = b[j];
                b[j] = temp ;
            }
}
