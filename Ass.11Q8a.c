#include<stdio.h>
#include<conio.h>
int main()
{
    int x, i;
    printf("Enter a number: ");
    scanf("%d", &x);

    if ( x <= 1 )
        {
            printf("Not a Prime Number\n"); // Not a prime number
        }
    else
    {
        for ( i = 2; i<x ; i++ )
            {
                if (x % i == 0)
                {
                    break;
                }
            }
    }

    if (i==x)
        {
            printf("%d is a prime number.\n", x);
        }
    else
        {
            printf("%d is not a prime number.\n", x);
        }

    return 0;
    getch();
}

