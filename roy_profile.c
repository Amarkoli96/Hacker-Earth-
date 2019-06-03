#include<stdio.h>
int main()
{
	int n,l,px,i;
	scanf("%d",&l);
	int w[n],h[n],p[n];
	scanf("%d",&n);
	px=l*l;
	for(i=0;i<n;i++)
	scanf("%d %d",&w[i],&h[i]);
	printf("\n");
	for(i=0;i<n;i++)
	p[i]=w[i]*h[i];
	
	for(i=0;i<n;i++)
	{
		if(p[i]==px)
		{
			printf("ACCEPTED\n");
		}
		else if(p[i]>px)
		{
			printf("CROP IT\n");
		}
		else
		{
			printf("UPLOAD ANOTHER\n");
		}
	}
return 0;
    
}
