// Write a program in C to count the total number of alphabets, digits and special
// characters in a string.

#include <stdio.h>

int main()
{
    char str[20] = "Abhi87998~&";
    int count_alphabets = 0, count_digit = 0, count_special_char = 0;

    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
            count_alphabets++;
        else if (str[i] >= '0' && str[i] <= '9')
        {
            count_digit++;
        }
        else
        {
            count_special_char++;
        }
    }
   
    printf("Total number of alphabets is %d\n",count_alphabets);
    printf("Total number of digit is %d\n",count_digit);
    printf("Total number of special char is %d",count_special_char);
    return 0;
}