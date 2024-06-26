#include<stdio.h>
#include<conio.h>
int sort (int a[] );

int main()
{
    int i, sa, a[10]={43,9432,943,284,93,8432,84,192,921,83};
    sa=sort(a);
    printf("Here's the sorted array : ");
    for( i=0 ; i<10 ; i++ )
    {
        printf("%d ", a[i]);
    }
    getch();
}


int sort ( int a[])
{
    int i, j, temp, sa;
    for ( i=0 ; i<10 ; i++ )
    {
        for ( j=0 ; j<9-i ; j++ )
        {
            if ( a[j]>a[j+1] )
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    sa=a[10];
    return sa;
}
