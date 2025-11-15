#include <stdio.h>

int main ()
{
    int a[5] ;
    int i, j, temp, sum = 0 ;
    float average ;

    printf ("Enter elements (characters) of array, total 5 - ") ;
    for (i = 0; i<5 ; i++)
    {
        scanf("%d",&a[i]) ;
    }

    printf ("Given array has elements - ") ;
    for (i = 0; i<5 ; i++)
    {
        printf("%d,",a[i]) ;
    }

    printf ("\n") ;

    for (i = 0; i<5 ; i++)
    {
        sum += a[i] ;
    }

    average = sum/5 ;

    printf ("Average of array elements = %.5f", average) ;

    return 0 ;
}