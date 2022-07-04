#include <stdio.h>
#include <string.h>
#include <ctype.h>

void hello ()
{
	printf("World!\n");
}
void world()
{
	printf("Hello, ");
	hello();
}
void compute (int x, int y)
{
	int n = x + y;
    printf("result is %d\n",n);
}
int times (int a, int b)
{
  int res = a * b;
  return res;
}

int main ()
{
    world();
    compute(5,5);
    int a = times(2,3);
    printf("product is %d",a);
    
    return 0;
}