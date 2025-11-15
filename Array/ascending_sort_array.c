#include <stdio.h>

int main ()
{
    int a[5] ;
    int i, j, temp ;

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

    for (i = 0 ; i < 5 ; i++)
    {
        for (j = i-1; j>=0 ; j--)
        {
            if (a[i]<a[j])
            {
                temp = a[i] ;
                a[i] = a[j] ;
                a[j] = temp ;
            }
        } 
    }

    printf ("\n") ;

    printf ("Sorted array is - ") ;
    for (i = 0; i<5 ; i++)
    {
        printf("%d,",a[i]) ;
    }
    

    return 0 ;
}