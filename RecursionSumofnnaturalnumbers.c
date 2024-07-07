#include<stdio.h>
#include<conio.h>


int sum ( int n )
{
    int s=0;
    if( n==1 )
        return 1;
    s = n+sum(n-1);
    return s;
}

int main()
{
    int k, n;
    printf("Enter value of k:");
    scanf("%d", &n);
    k = sum (n);
    printf("Sum of First %d Natural Numbers is %d", n, k);
    getch();
    return 0;
}
