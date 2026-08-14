#include<stdio.h>
#include<math.h>
int main()
{
    int a1,a2,b1,b2,c1,c2,d1,d2,d3;
    printf("Enter values for a1: ");
    scanf("%d", &a1);
    printf("Enter values for a2: ");
    scanf("%d", &a2);
    printf("Enter values for b1: ");
    scanf("%d", &b1);
    printf("Enter values for b2: ");
    scanf("%d", &b2);
    printf("Enter values for c1: ");
    scanf("%d", &c1);
    printf("Enter values for c2: ");
    scanf("%d", &c2);
    
    d1 = sqrt(pow((a1-b1),2) + pow((a2-b2),2));
    d2 = sqrt(pow((a1-c1),2) + pow((a2-c2),2));
    d3 = sqrt(pow((b1-c1),2) + pow((b2-c2),2));

    if (d1 == d2 && d2 ==d3)
    {
        printf("The points form an equilateral triangle.\n");
    }
    else if (d1 == d2 || d2 == d3 || d1 == d3)
    {
        printf("The points form an isosceles triangle.\n");
    }
    else
    {
        printf("The points form a scalene triangle.\n");
    }
    return 0;
}
