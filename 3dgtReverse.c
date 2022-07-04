#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int num;
  int a,b,c;
  printf("Reversing Number\n");
  printf("Enter 3 Digit Number: ");
  scanf("%d",&num);
  
  a = num % 10;
  b = (num % 100) /10;
  c = num / 100;
  
  printf("Output:  %d%d%d",a,b,c);
 
  return 0;
}
//simple quiz
/*
#include <stdio.h>

int main ()
{
	int a [5];
	
	3[a] = 10;  // 3[a] same as a [3]
	
	printf("%d",*(a+3)); // this means you are accessing 2nd/4th Element in array
	
	return 0;
}
*/
