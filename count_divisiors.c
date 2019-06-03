#include<stdio.h>
int main()
{
	int l,k,r,i;
	int count=0;
	scanf("%d %d %d",&l,&k,&r);
	for(i=l;i<=k;i++)
	{
		if(0==i%r)
		count++;
	}
	printf("%d",count);
return 0;
}
