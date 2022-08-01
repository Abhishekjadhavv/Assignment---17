// Write a program to reverse a string.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    char temp;
    int len = 0;

    printf("Enter any string");
    fgets(str, 20, stdin);
    for (int i = 0; str[i]; i++)
        if (str[i] != 10)
            len++;

    for (int i = 0; i<len/2; i++)
    {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - i - 1] = temp;
    }

    printf("%s", str);

    return 0;
}