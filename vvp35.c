/*
Program (35)
Write a program to accept the details of N employees using
an array of structures and display the stored employee
information.

Solution: Array of Structure
*/

#include <stdio.h>

// Define a structure named Employee
struct Employee
{
    int emp_id;      // Employee ID
    char name[50];   // Employee Name
    float salary;    // Employee Salary
};

int main()
{
    int n, i;

    // Accept the number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Declare an array of structures
    struct Employee emp[n];

    // Accept employee details
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of Employee %d:\n", i + 1);

        printf("Enter Employee ID: ");
    