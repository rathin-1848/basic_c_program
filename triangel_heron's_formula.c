/*Write a C program to calculate the area of a triangle using Heron's formula, which requires the sqrt() function.*/

#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    float s,area;

    printf("Enter the 1st side of triangel: ");
    scanf("%d", &a);

    printf("Enter the 2nd side of triangel: ");
    scanf("%d", &b);

    printf("Enter the 3rd side of triangel: ");
    scanf("%d", &c);

    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("The area of triangel with a side vaule of a=%d, b=%d, c=%d is: %.2f", a,b,c,area);

    return 0;

}
