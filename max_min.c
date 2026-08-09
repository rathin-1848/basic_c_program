/*Write a C program to find the maximum and minimum of two floating-point numbers using the fmax() and fmin() functions.*/

#include<stdio.h>
#include<math.h>

int main()
{
    float a,b;
    float max,min;
    
    printf("Enter the 1st floating-number: ");
    scanf("%f", &a);
    
    printf("Enter the 2nd floating number: ");
    scanf("%f", &b);
    
    max = fmax(a,b);
    min = fmin(a,b);
    
    printf("Maximum = %.2f\n", max);
    printf("Minimum = %.2f", min);
    return 0;
}
