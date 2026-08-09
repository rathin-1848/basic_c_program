/*Write a C program to calculate the distance between two points using the distance formula and the sqrt() and pow() functions.*/

#include<stdio.h>
#include<math.h>

int main()
{
    int x1,y1,x2,y2,dis;
    
    printf("Enter the 1st point value: ");
    scanf("%d", &x1);
    
    printf("Enter the 2nd point value: ");
    scanf("%d", &y1);
    
    printf("Enter the 3rd point value: ");
    scanf("%d", &x2);
    
    printf("Enter the 4th point value: ");
    scanf("%d", &y2);
    
    dis = sqrt(pow((x1-x2),2) + pow((y1-y2),2));
    
    printf("The distance of (%d,%d) and (%d,%d): %d cm", x1,y1,x2,y2,dis);
    return 0;
}
