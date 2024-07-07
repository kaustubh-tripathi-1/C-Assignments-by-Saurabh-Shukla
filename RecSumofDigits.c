#include<stdio.h>
#include<conio.h>


int sum ( int n )
{
    int s=0;
    if( n==0 )
    {
        return 0;
    }
    else
    {
        s=n%10+sum(n/10);
    }

    return s;
}

int main()
{
    int k, n;
    printf("Enter value of k:");
    scanf("%d", &n);
    k = sum (n);
    printf("Sum of Digits of %d  is %d", n, k);
    getch();
    return 0;
}
