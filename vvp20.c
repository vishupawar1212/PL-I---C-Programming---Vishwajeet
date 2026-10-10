/*
Program (20) -> Write a program to accept the elements of a one-dimensional array
and calculate the sum of all its elements.

Solution (2): Using while loop
*/

#include <stdio.h>
int main()
{
    int arr[5], i = 0, sum = 0;

    // Input elements using while loop
    while(i < 5)
    {
        printf("Enter element at index %d: ", i);
        scanf("%d", &arr[i]);
        i++;
    }

    // Reset index and calculate sum
    i = 0;
    while(i < 5)
