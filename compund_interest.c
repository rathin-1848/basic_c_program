#include<stdio.h>
#include<math.h>

int main()
{

    float p,a,r,t,i;

    printf("Enter the principal: ");
    scanf("%f", &p);

    printf("Enter the rate: ");
    scanf("%f", &r);

    printf("Enter the time: ");
    scanf("%f", &t);

    a = p*pow((1+r/100),t);
    i = a-p;


    printf("The Principal: %.2f\n", p);
    printf("The amount: %.2f\n", a);
    printf("The rate of interest: %.2f %%\n", r);
    printf("The time: %.2f year\n", t);
    printf("The Interest: %.2f\n", i);

    return 0;
}
