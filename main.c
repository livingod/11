#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   int i;
   int grade[5];
   int average = 0;
   
   for(i=0;i<5;i++)
   {
                   printf("input value [%i]= ",i);
                   scanf("%d",&grade[i]);
   }
   
   for(i=0;i<5;i++)
   {
                   printf("grade[%i] = %i\n", i, *(grade+i));//grade+i ???????
                   average = average + *(grade+i)/5;
   }
                   
   printf("average = %i\n", average);
   
  system("PAUSE");	
  return 0;
}

