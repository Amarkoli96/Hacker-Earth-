#include <stdio.h>
int main()
{
   int i,j,num=0,range,p=0;
   printf("Please enter a number: \n");
   scanf("%d", &range);
   for(j=1;j<=range;j++)
   {
   num=j;
   p=0;
   for(i=1;i<=num;i++)
   {
      if(num%i==0)
      {
         p++;
      }
   }
   if(p==2)
   {
      printf("%d ",num);
   }
}
}
