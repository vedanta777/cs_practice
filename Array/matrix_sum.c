#include <stdio.h>

int main ()
{
    int a[3][3], b[3][3], sum[3][3] ;
    int i, j, m, n ;

    printf ("Enter 9 elements of 3x3 matrix A, one by one \n") ;

    for (i = 0 ; i < 3 ; i++)
    {
        for (j = 0 ; j < 3 ; j++)
        {
            printf ("Enter element [%d][%d] - ", i+1, j+1) ;
            scanf ("%d", &a[i][j]) ;
        }
    }


    printf ("The matrix A is - \n") ;

    for (i = 0 ; i < 3 ; i++)
    {
        printf ("|") ;
        for (j = 0 ; j < 3 ; j++)
        {
            printf ("%4d", a[i][j]) ;
        }
        printf ("| \n") ;
    }

    printf ("Enter 9 elements of 3x3 matrix B, one by one \n") ;

    for (i = 0 ; i < 3 ; i++)
    {
        for (j = 0 ; j < 3 ; j++)
        {
            printf ("Enter element [%d][%d] - ", i+1, j+1) ;
            scanf ("%d", &b[i][j]) ;
        }
    }


    printf ("The matrix B is - \n") ;

    for (i = 0 ; i < 3 ; i++)
    {
        printf ("|") ;
        for (j = 0 ; j < 3 ; j++)
        {
            printf ("%4d", b[i][j]) ;
        }
        printf ("| \n") ;
    }

    for (i = 0 ; i < 3 ; i++)
    {
        for (j = 0 ; j < 3 ; j++)
        {
            sum[i][j] = 0;
        }
    }
    
    for (i = 0 ; i < 3 ; i++)
    {
        for (j = 0 ; j < 3 ; j++)
        {
            sum[i][j] += a[i][j] + b[i][j] ;
        }
    }

    printf ("Matrix A+B is - \n") ;

    for (i = 0 ; i < 3 ; i++)
    {
        printf ("|") ;
        for (j = 0 ; j < 3 ; j++)
        {
            printf ("%4d", sum[i][j]) ;
        }
        printf ("| \n") ;
    }

    return 0 ;
}