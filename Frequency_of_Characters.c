// Write a program in C to Find the Frequency of Characters.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    char temp[20];
    int count_char;

    printf("Enter any string");
    fgets(str, 20, stdin);
    strcpy(temp, str);

    for (int i = 0; temp[i]; i++)
    {
        count_char = 1;
        for (int j = i + 1; temp[j]; j++)
        {
            if (temp[i] ==' ')
                break;
            if (temp[i] == temp[j])
            {
                count_char++;
                temp[j] =' ';
            }
        }

        if (temp[i] != ' ' && temp[i]!=10)
        { 
            printf("character '%c' occurs %d times", temp[i], count_char);
            printf("\n");
        }
        
    }

    return 0;
}