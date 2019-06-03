#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int sh,sm,eh,em,n;
	int h1,m1,h2,m2,d1,d2,d,m,mm;
	float h;
	scanf("%d",&n)
	scanf("%d %d %d %d",&sh,&sm,&eh,&em);
	h1=sh*60;
	m1=sm;
	h2=eh*60;
	m2=em;
	d1=h1+m1;
	d2=h2+m2;
	d=abs(d1-d2);
	if(d<60)
	{
		printf("0 %d\n",d);
	}
	else if(d==60)
	{
		printf("1 0\n");
	}
	else if(d>60)
	{
		h=d/60;
		m=h*60;
		mm=d-m;
		printf("%f%d%d",h,m,mm);
	}
}
