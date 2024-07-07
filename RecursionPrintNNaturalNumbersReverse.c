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
        printf("%d ", n);
        pnat(n-1);1
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

