// Write a program to count vowels in a given string

#include <stdio.h>

int main()
{
    char str[20];
    char vowels[11] = "AEIOUaeiou";
    int count_vowels = 0;

    printf("Enter any string");
    fgets(str, 20, stdin);

    for (int i = 0; str[i]; i++)
    {
        for (int j = 0; vowels[j]; j++)
        {
            if (str[i] == vowels[j])
                count_vowels++;
        }
    }

    printf("%d vowel character in this string", count_vowels);

    return 0;
}