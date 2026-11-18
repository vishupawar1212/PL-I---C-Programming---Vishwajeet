/*
Program (37)

Write a program to accept two strings and perform operations
using inbuilt functions:

1) Copy one string into another
2) Reverse the string
3) Length of the string
4) Compare two strings
5) Concatenate one string to another

Solution: Using built-in string functions
*/

#include <stdio.h>
#include <string.h>   // Header file for string functions

int main()
{
    char str1[100], str2[100], str3[100];

    printf("\nEnter First String: ");
    scanf("%s", str1);

    printf("\nEnter Second String: ");
    scanf("%s", str2);

    // 1) Copy one string into another
    strcpy(str3