/*Write a C program to calculate the absolute value of a given integer and floating-point number using the abs() and fabs() functions.*/


#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int num;
    float decimal;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    printf("Enter a floating-point number: ");
    scanf("%f", &decimal);
    
    printf("The absolute value of integer %d: %d\n", num, abs(num));
    printf("The absolute value of floating-point number %.2f: %.2f\n", decimal, fabs(decimal));
    return 0;
}
