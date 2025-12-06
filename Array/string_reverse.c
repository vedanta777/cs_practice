#include <stdio.h>
#include <string.h>

int main()
{
    char a [100] ;
    char *p1, *p2, *pa;
    int i, n ;
    char temp ;

    printf ("Enter a string - ") ;
    scanf ("%[^\n]s", a) ;

    if (strlen(a)%2==0)
        n = strlen(a)/2 ;
    else
        n = (strlen(a)-1)/2 ;

    printf ("\n") ;

    for (i = 0 ; i < n ; i++)
    {
         p1 = &a[i] ;
         p2 = &a[strlen(a) - i - 1] ;

         temp = *p1 ;
         *p1 = *p2 ;
         *p2 = temp ;
    }

    printf ("The string after reversing is - %s", a) ;

    return 0 ;
}
