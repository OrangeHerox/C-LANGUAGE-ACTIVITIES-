#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int Orignum, tempnum, remainder;
  int result = 0;
  
    printf("Enter Any Number In the Range of 0-999: ");
    scanf("%d", &Orignum);
    
    tempnum = Orignum;

    while (tempnum != 0)
     {
      
        remainder = tempnum % 10;
        
       result = result + (remainder * remainder * remainder);
        
             tempnum = tempnum / 10;
    }


    if (result == Orignum)
    {
        printf("%d IS AN ARMSTRONG NUMBER.", Orignum);
        }
    else
{
        printf("%d IS NOT AN ARMSTRONG NUMBER.", Orignum);
 }
  return 0;
}

