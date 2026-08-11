#include<stdio.h>

int main()
{
    float c,f;
    
    printf("Enter the celcious value: ");
    scanf("%f", &c);
    
    f= ((9*c)/5)+32;
    
    printf("The fahrenheit value of %.2f degree celcious: %.2f", c,f);
    return 0;
    
}
