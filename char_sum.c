#include<stdio.h>
#define size (100)
typedef char char_t;
int char_sum(char *);
main()
{
	char_t s[size];
	int sum=0;
	scanf("%s",s);
	sum=char_sum(s);
	printf("%d",sum);
}

int char_sum(char *p)
{
	static int s=0;
	while(*p)
	{
		if(*p>='a'&&*p<='z')
		{
			s=s+(*p-96);
		}
	p++;
	}
	return s;
}
