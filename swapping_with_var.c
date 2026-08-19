#include<stdio.h>

int main()
{

    int a,b,temp;

    printf("Enter the 1st no.: ");
    scanf("%d", &a);

    printf("Enter the 2nd no.: ");
    scanf("%d", &b);

    printf("Before swapping the value of a & b are: %d & %d\n", a,b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping the value of a & b are: %d & %d\n", a,b);

    return 0;
}
