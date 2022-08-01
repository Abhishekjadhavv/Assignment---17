// Write a program in C to copy one string to another string.

#include<stdio.h>
#include<string.h>

int main(){
    char str[20] = "Abhishek jadhav";
    char str1[20];

    strcpy(str1,str);
    printf("%s",str1);
    return 0;
}