#include<stdio.h>
int main()
{
	char s[100];
	char temp[100];
	gets(s);
	strcpy(temp,s);
	strrev(s);
	if(0==strcmp(temp,s))
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
		return 0;
}
