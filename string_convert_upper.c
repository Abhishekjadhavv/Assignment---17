// Write a program to convert a given string into uppercase

#include <stdio.h>
// #include<string.h>

int main()
{
    char str[20];

    printf("Enter any string");
    fgets(str, 20, stdin);
    // strupr(str);
    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }

    printf("convert lower to upper case %s",str);
    return 0;
}