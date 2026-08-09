/*Write a C program to calculate the area of a circle using the pow() function.*/


#include<stdio.h>
#include<math.h>

int main()
{
    int r;
    float area;
    
    printf("Enter the radius of the Circle: ");
    scanf("%d", &r);
    
    area = M_PI*pow(r,2);
    
    printf("Area of a circle with a radius of %d cm: %.2f cm", r,area);
    return 0;
}
