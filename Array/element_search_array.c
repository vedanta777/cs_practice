#include <stdio.h>

int main ()
{
    int a[10] ;
    int i, j, p, is_found = 0 ;

    printf ("Enter elements (characters) of array, total 10 - ") ;
    for (i = 0; i < 10 ; i++)
    {
        scanf("%d",&a[i]) ;
    }

    printf ("Given array has elements - ") ;
    for (i = 0; i < 10 ; i++)
    {
        printf("%d,",a[i]) ;
    }

    printf ("\n") ;

    printf ("What do you wish to search in the array ?? Enter the element - ") ;
    scanf ("%d", &p) ;

    printf ("\n") ;

    for (i = 0; i < 10 ; i++)
    {
        if (a[i] == p) 
        {
            printf ("Element %d found at index %d in the array", p, i) ;
            is_found ++ ;
        }
    }

    if (is_found==0) 
        {
            printf ("Element %d does not exist in array", p) ;
        }

    return 0 ;
}