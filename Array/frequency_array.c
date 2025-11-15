# include <stdio.h>

int main ()
{
    int a[10] ;
    int i, j, k, count = 0, check = 0;

    printf ("Enter elements (numbers) of array, total 10 - ") ;
    for (i = 0; i < 10 ; i++)
    {
        scanf("%d",&a[i]) ;
    }

    printf ("Given array has elements -") ;
    for (i = 0 ; i < 10 ; i++)
    {
        printf("%d,",a[i]) ;
    }

    printf ("\n") ;

    for (i = 0 ; i < 10 ; i++) 
    {
        for (k = i-1 ; k >= 0 ; k--)
        {
            if (a[i] == a[k])
            {
                check += 1 ;
            }
        }

        if (check == 0) 
            {
                for (j = 0 ; j <= 10; j++)
                {
                    if (a[i] == a[j])
                        {
                        count += 1 ;
                        }
                }

            }

        if (count)
        {
            printf ("Frequency of %d = %d\n", a[i], count) ;
        }
        count = 0 ;
        check = 0 ;
    }

    return 0 ;
}