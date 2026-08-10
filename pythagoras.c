/*Write a C program to calculate the hypotenuse of a right-angled triangle using Pythagoras' theorem and the sqrt() function.*/

#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c;
    
    printf("Enter the base vaule of triangle: ");
    scanf("%f", &a);
    
    printf("Enter the height of triangel: ");
    scanf("%f", &b);

    c = sqrt(pow(a,2)+pow(b,2));

    printf("The hypotenuse of a right-angled triangel with a base of %.2f cm and a height of %.2f cm is: %.2f", a,b,c);
    
    return 0;
}
