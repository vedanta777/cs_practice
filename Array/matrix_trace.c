#include <stdio.h>

int main ()
{
    int a[3][3] , trace = 0;
    int i, j ;

    printf ("Enter 9 elements of 3x3 matrix, one by one \n") ;

    for (i = 0 ; i < 3 ; i++)
    {
        for (j = 0 ; j < 3 ; j++)
        {
            printf ("Enter element [%d][%d] - ", i+1, j+1) ;
            scanf ("%d", &a[i][j]) ;

            if (i==j) 
            {
                trace += a[i][j] ;
            }
        }

    }


    printf ("The matrix is - \n") ;

    for (i = 0 ; i < 3 ; i++)
    {
        printf ("|") ;
        for (j = 0 ; j < 3 ; j++)
        {
            printf ("%4d", a[i][j]) ;
        }
        printf ("| \n") ;
    }

    printf ("Trace of matrix = %d", trace) ;

    return 0 ;
}