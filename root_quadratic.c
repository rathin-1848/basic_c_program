/*Write a C program to calculate the roots of a quadratic equation using the quadratic formula and the sqrt() function.*/

#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    float x,y;

    printf("Enter a value of the quadratic equation: ");
    scanf("%d", &a);

    printf("Enter b value of the quadratic equation: ");
    scanf("%d", &b);

    printf("Enter c value of the quadratic equation: ");
    scanf("%d", &c);

    x = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    y = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);

    printf("The first root of the quadratic equation is: %.2f\n", a,b,c,x);
    printf("The second root of the quadratic equation is: %.2f\n", a,b,c,y);

    return 0;

}
