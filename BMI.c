/*Write a C program to calculate the Body Mass Index (BMI) and display whether the person is Underweight, Normal, Overweight, or Obese.*/

#include<stdio.h>
#include<math.h>

int main()
{
  float weight,height,BMI;
  
  printf("Enter your weight: ");
  scanf("%f", &weight);
  
  printf("Enter your height: ");
  scanf("%f", &height);
  
  BMI = weight/(height*height);
  
  printf("Your BMI: %.2f", BMI);
  return 0;
}
