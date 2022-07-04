#include <stdio.h>

int main()
{
 
    int  a[7]={1000,500,100,50,10,5,1};
    int num1,temp,i; 
 
    printf("Enter Amount: ");
 
    scanf("%d",&num1);
    
    temp = num1;
    
     for(i=0;i<7;i++)
    {
     printf("\n %d - %d",a[i],temp/a[i]);
     
     temp=temp%a[i];
    }
  
  return 0;
}
