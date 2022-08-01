// Write a program to count the occurrence of a given character in a given string.

#include <stdio.h>

int main()
{
    char str[20] = "Abhisheik";
    char ch, count = 0;

    printf("Enter a character");
    scanf("%c", &ch);

    for (int i = 0; str[i]; i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }

    printf("character '%c' occurs %d times \n ",ch,count);
    return 0;
}