/* Write a program to count the number of vowels and consonants in a string using a
pointer.*/

#include<stdio.h>

int main ()
{
    char str[20] ;

    char *p ;
    p = str ;  // str ~ &str[0]

    printf("Enter a string : ");
    gets (p);

    int i , vowel=0, consonant=0 ;

    for ( i=0 ; *(p+i) ; i++)
    {
        if ( *(p+i) == 'a' || *(p+i) == 'e' || *(p+i) == 'i' || *(p+i) == 'o' || *(p+i) == 'u')
            vowel ++ ;

        else 
            consonant ++ ;
        
    }

    printf("Number of vowels are : %d",vowel);
    printf("\nNumber of consonants are %d",consonant);

    return 0 ;
}
