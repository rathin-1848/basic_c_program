#include<stdio.h>
#include<string.h>
int main()
{
    int age;
    char citizenship[20];
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("Enter your citizenship: ");
        scanf("%s", citizenship);
        if (strcasecmp(citizenship, "INDIAN") == 0 || strcasecmp(citizenship, "INDIA") == 0)
        {
            printf("You are eligible to vote.\n");
        }
        else
        {
            printf("You are not eligible to vote due to citizenship.\n");
        }
    }
    else
    {
        printf("You are not eligible to vote due to age.\n");
    }
    return 0;
}
