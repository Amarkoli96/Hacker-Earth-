#include<stdio.h>
main()
{
	int N,i;
	int product=1;
	scanf("%d",&N);
	int a[N];
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<N;i++)
	{
		product=product*a[i];
	}
	printf("%d",product);
	
}
