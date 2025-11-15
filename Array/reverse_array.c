# include <stdio.h>

int main ()
{
    int a[5] ;
    int i = 0 ;

    printf ("Enter elements (characters) of array, total 5 - ") ;
    for (i = 0; i<5 ; i++)
    {
        scanf("%d",&a[i]) ;
    }

    printf ("Given array has elements -") ;
    for (i = 0; i<5 ; i++)
    {
        printf("%d,",a[i]) ;
    }

    printf("\n") ;

    printf ("Reverse of array is -") ;
    for (i = 0 ; i<5; i++)
    {
        printf("%d,",a[4-i]) ;
    }

    return 0 ;
}