#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  float km,miles,foot,dm,df;
  
  printf("Enter the distance between two cities in Kilometers: ");
  scanf("%f",&km);
  
  miles = 0.621371;
  foot = 3280.84;
  
  dm = km * miles;
  df = km * foot;
  
  printf("The Distance Between Two Cities is %.0f kilometers \nOr  %.2f miles \nOr  %.0f foot ",km, dm,df);
  return 0;
}