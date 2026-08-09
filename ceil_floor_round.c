/*Write a C program to round a floating-point number using the ceil(), floor(), and round() functions.*/

#include<stdio.h>
#include<math.h>

int main()
{
    float num;
    
    printf("Enter a floating-number: ");
    scanf("%f", &num);
    
    printf("Ceiling value: %.0f\n", ceil(num));
    printf("Floor value: %.0f\n", floor(num));
    printf("Rounded value: %.0f\n", round(num));
    return 0;
}
