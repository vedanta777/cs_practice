# include <stdio.h>

int main ()
{
    int a[6] ;
    int i, j, count = 0;
    int odd_sum = 0, even_product = 1 ;

    printf ("Enter elements (numbers) of array, total 6 - ") ;
    for (i = 0; i<6 ; i++)
    {
        scanf("%d",&a[i]) ;
    }

    printf ("Given array has elements -") ;
    for (i = 0 ; i<6 ; i++)
    {
        printf("%d,",a[i]) ;
    }

    for (i = 0 ; i<6 ; i++) 
    {
        if (a[i]%2 == 0) 
        {
            even_product *= a[i] ;
        }

        else 
        {
            odd_sum += a[i] ;
        }
    }

    printf ("\n") ;
    printf ("Sum of odd numbers of array = %d\n", odd_sum) ;
    printf ("Sum of even numbers of array = %d\n", even_product) ;

    return 0 ;
}