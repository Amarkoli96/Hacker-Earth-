#include<stdio.h>
#define size (100)
void mystr_toggle(char*);
main()
{
	char s[size];
	printf("enter the string to convert it to upper case\n");
	gets(s);
	mystr_toggle(s);
	puts(s);
}
void mystr_toggle(char *p)
{
	while(*p)
	{
		if(*p>='a'&&*p<='z')
		{*p=*p-32;
		p++;
		}
		if(*p>='A'&&*p<='Z')
		{
		*p=*p+32;
		p++;
		}
	}
}
