/*Write a C program to calculate the remainder when one floating-point number is divided by another using the fmod() function.*/

#include<stdio.h>
#include<math.h>

int main()
{
    float a,b, remainder;
    
    printf("Enter the 1st floating-number: ");
    scanf("%f", &a);
    
    printf("Enter the 2nd floating-number: ");
    scanf("%f", &b);
    
    remainder = fmod(a,b);
    
    printf("Remainder = %.2f", remainder);
    return 0;
}
