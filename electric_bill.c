#include<stdio.h>

int main()
{
    int unit,charge;

    printf("Enter the using unit: ");
    scanf("%d", &unit);

    if(unit >= 0 && unit <= 100)
        {
            charge = unit * 5;
            printf("Your charge is: %d", charge);
        } 
    else if(unit >= 101 && unit <= 200)
        {
            charge = unit * 7;
            printf("Your charge is: %d", charge);
        }
    else
        {
            charge = unit * 10;
            printf("Your charge is: %d", charge);
        }

    return 0;
}
