#include <stdio.h>
int main()
{
  int marks[10];
  
  for(int i=0;i<=9;i++)
    {
     scanf("%d",&marks[i]);
    }
   int countPass=0;
   int countFail=0; 
   
   for(int i=0; i<10; i++)
   {
       if(marks[i]>=35)
       {
           countPass++;
       }
       else{
             countFail++;
           }
       
   }
 printf("Total pass %d\n",countPass);
 printf("Total fail %d\n",countFail);

return 0;
}
