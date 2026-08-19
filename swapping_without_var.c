#include<stdio.h>

int main()
{

    int a,b;

    printf("Enter the 1st no.: ");
    scanf("%d", &a);

    printf("Enter the 2nd no.: ");
    scanf("%d", &b);

    printf("Before swapping the value of a & b are: %d & %d\n", a,b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("After swapping the value of a & b are: %d & %d\n", a,b);

    return 0;
}
