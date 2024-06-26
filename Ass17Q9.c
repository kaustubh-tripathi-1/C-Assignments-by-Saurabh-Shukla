#include <stdio.h>
#include <conio.h>
#include <string.h>

// Function to remove newline character from a string
void remove_newline(char str[])
{
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
    }
}

int cmp(char str[], char strr[])
{
    int c = strcmp(str, strr);
    return c;
}

int main()
{
    char str[100], strr[100];

    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);
    printf("Enter another string:\n");
    fgets(strr, sizeof(strr), stdin);

    // Remove newline characters from both strings
    remove_newline(str);
    remove_newline(strr);

    int c = cmp(str, strr);
    if (c < 0)
        printf("The strings are in dictionary order\n");
    else if (c == 0)
        printf("The strings are the same\n");
    else
        printf("The strings are not in dictionary order\n");

    getch();
    return 0;
}
