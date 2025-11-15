# include <stdio.h>

int main ()
{
    int a[5] ;
    int i, j, count = 0;

    printf ("Enter elements (characters) of array, total 5 - ") ;
    for (i = 0; i<5 ; i++)
    {
        scanf("%d",&a[i]) ;
    }

    printf ("Given array has elements -") ;
    for (i = 0 ; i<5 ; i++)
    {
        printf("%d,",a[i]) ;
    }

    printf ("\n") ;
    printf ("Prime numbers in the array are - ") ;

    for (i = 0 ; i<5 ; i++) 
    {
        count = 0 ;

        for (j = 1 ; j<=a[i] ; j++) 
        {
            if (a[i]%j == 0) 
            {
                count += 1 ;
            }
        }

        if (count==2) 
        {
            printf ("%d,",a[i]) ;
        }
    }

    return 0 ;
}

