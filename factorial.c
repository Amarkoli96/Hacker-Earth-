#include<stdio.h>
int main()
{
    int num;
    int fact;
    int i;
    printf("enter the number\n");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("the fact is %d",fact);
    return 0;
}
