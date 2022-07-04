#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
 int Totalpopulation,men,women,
 litp,litmen,litwomen,ilmen,ilwomen;
 
 Totalpopulation = 80000;
 
 men = (Totalpopulation * 52) / 100;
 
 women = Totalpopulation - men;
 
 litp = (Totalpopulation * 48) / 100;
 
 litmen = (Totalpopulation * 35) / 100;
 
 litwomen = litp - litmen;
 
 ilmen = men - litmen;
 
 ilwomen = litp - litwomen;
 
 
 printf("Total No. of Men in Town: %d \n",men);
 printf("Total No. of Literate People: %d \n",litp);
 printf("Total No. of Literate Men: %d \n",litmen);
 printf("Total No. of Women in Town: %d \n",women);
 printf("Total No. of Illiterate Men is %d and Women is %d",ilmen,ilwomen);
 return 0;
}