/*
Program (24) -> Write a program to read two matrices of the same order,
perform matrix addition, and display the resultant matrix using a two-dimensional array.

Solution (3): Using do-while loop
*/

#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3];
    int i, j;

    // Input Matrix A
    printf("Enter elements of Matrix A:\n");
    i = 0;
    do
    {
        j = 0;
        do
        {
            scanf("%d", &a[i][j]);
            j++;
        } while(j < 3);
        i++;
    } while(i < 3);

    // Input Matrix B
    printf("Enter elements of Matrix B:\n");
    i = 0;
    do
    {
        j = 0;
