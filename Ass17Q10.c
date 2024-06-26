#include <stdio.h>
#include <conio.h>
#include <string.h>


#define MAX_CITIES 10
#define MAX_NAME_LENGTH 50

void remove_newline(char str[])
{
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
    }
}

void sort_cities(char city[][MAX_NAME_LENGTH], int n)
{
    char temp[MAX_NAME_LENGTH];
    for( i=0 ; i<n-1; i++ )
}

int main ()
{
    char city[MAX_CITIES][MAX_NAME_LENGTH];
    int i;
    printf("Enter 10 City names :\n");
    for ( i=0; i<10; i++ )
    {
        printf("City %d :\n", i+1);
        fgets(city[i], sizeof(city[i]), stdin);
        remove_newline(city[i]);
    }




}
