// Write a C program to sort a string array in ascending order.

#include <string.h>
#include <stdio.h>

int main()
{
    char str[5][20];
    char cpy[20];

    printf("Enter 5 students name\n");

    for (int i = 0; i < 5; i++)
    {
        fgets(str[i], 20, stdin);
    }

    printf("\n");

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 0; j < 5-i ; j++)
        {
            int com = strcmp(str[j], str[j+1]);
            if (com > 0)
            {
                strcpy(cpy, str[j]);
                strcpy(str[j], str[j+1]);
                strcpy(str[j+1], cpy);
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%s", str[i]);
    }
    return 0;
}