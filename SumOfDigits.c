#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int InputNo,tempNo,remainder,sum = 0;
  
 
  printf("Input A Number: ");
  scanf("%d",&InputNo);
  
  tempNo = InputNo;
  
  while (tempNo > 0)
  {
    remainder = tempNo % 10;
    sum = sum + remainder;
    tempNo = tempNo / 10;
  }
 
 printf ("The Sum Of Entered Digits is: %d ",sum);  
 
 return 0;
  
}