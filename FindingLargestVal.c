#include <stdio.h>

//Compiler version gcc  6.3.0
int const num = 5;
int main()
{
  int values[num];
  int i = 0, j = 0;
  int a = 0;
  int index = 0;
  
  for (i = 0; i < num; i++)
  {
    printf("Enter Value No.%d : ",i+1);
    scanf("%d",&values[i]);
    
    // finding the indices with large value 
    if (values[0] < values[i]) // comparing first index to all 
     {
     index = i+1;
     values[0] = values[i];
     }  
  }
  // in this loop it arrange the value to ascending
/*   for (i = 0; i < num; i++)
  {
    for (j = i+1; j < num; j++)
    {    
      if (values[i] > values[j])
      {
         a = values[i];
         values[i] = values[j];
         values[j] = a;
      }
    }
  }*/
  // value is already in ascending so we will assume the 
  //Largest Value will be in the last index  
  printf("\nLargest Value is %d in Index [%d]",values[0],index);
  return 0;
}