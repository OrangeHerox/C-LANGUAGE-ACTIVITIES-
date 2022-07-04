#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  
 float Totalpopulation,men,women,
 litp,litmen,litwomen,ilmen,ilwomen;
 
 Totalpopulation = 80000;
 
 men = (Totalpopulation * 52) / 100;
 
 women = Totalpopulation - men;
 
 litp = (Totalpopulation * 48) / 100;
 
 litmen = (Totalpopulation * 35) / 100;
 
 litwomen = litp - litmen;
 
 ilmen = men - litmen;
 
 ilwomen = litp - litwomen;
 
 
 printf("Total No. of Men in the Town: %.0f \n",men);
 printf("Total No. of Literate People: %.0f \n",litp);
 printf("Total No. of Literate Men: %.0f \n",litmen);
 printf("Total No. of Women: %.0f \n",women);
 printf("Total No. of Illiterate men is %.0f and Women is %.0f\n",ilmen,ilwomen);
 return 0;
 
}