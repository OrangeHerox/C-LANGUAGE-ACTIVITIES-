#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  float start,end,travel,renum;
 
  printf("MILEAGE RENUMERATION CALCULATOR\n");
  
  printf("Enter Beginning Odometer Reading:  ");
  scanf("%f",&start);
  
  printf("Enter Ending Odometer Reading:  ");
  scanf("%f",&end);
  
  travel = end - start;
  renum = travel * 25;
  
  printf("You traveled : %.1f miles \nAt Rs.25 per mile, Your Renumeration is : Rs.%.f  ", travel, renum);
  
  return 0;
}