#include<stdio.h>
#include<conio.h>

void pnat( int );

void pnat ( int n )
{
    if( n==1 )
    {
        printf("1 ");
    }
    else
    {
        pnat(n-1);
        printf("%d ", n);
    }

}
int main()
{
    int k;
    printf("Enter value of n:");
    scanf("%d", &k);
    pnat(k);
    getch();
    return 0;
}

