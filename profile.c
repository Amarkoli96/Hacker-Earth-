#include<stdio.h>
int main()
{
	int l,w,h,n;
	scanf("%d",&l);
	scanf("%d",&n);
	scanf("%d %d",&w,&h);
	if(w<l||h<l)
	{
		printf("UPLOAD ANOTHER\n");
	}
	else if(w>l&&h>l)
	{
		if(w==l)
		{
			printf("ACCEPTED\n");
		}
		else
		{
			printf("CROP IT\n");
		}
	}
return 0;
}
