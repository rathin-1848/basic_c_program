/*Write a C program to calculate the circumference of a circle using the value of π from math.h*/

#include<stdio.h>
#include<math.h>


int main()
{
    int r;
    float circumference;
    
    printf("Enter the vaule of radius: ");
    scanf("%d", &r);
    
    circumference = 2*M_PI*r;
    
    printf("Circumference of a circle with a radius of %d: %.2f",  r,circumference);
    return 0;
}
