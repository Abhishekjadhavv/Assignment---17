// Write a program to convert a given string into lower

#include <stdio.h>
// #include<string.h>

int main()
{
    char str[20];

    printf("Enter any string");
    fgets(str, 20, stdin);
    //  strlwr(str);
    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }

    printf("convert upper to lower case %s",str);
    return 0;
}