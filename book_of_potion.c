#include<stdio.h>
#define size (10)
#include<string.h>
#include<conio.h>
int main()
{
	int d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,D1,D2,D3,D4,D5,D6,D7,D8,D9,D10,sum;
	char s[10];
	scanf("%s",s);
	if((strlen(s)==10))
	{
	d1=s[0]-48;
	d2=s[1]-48;
	d3=s[2]-48;
	d4=s[3]-48;
	d5=s[4]-48;
	d6=s[5]-48;
	d7=s[6]-48;
	d8=s[7]-48;
	d9=s[8]-48;
	d10=s[9]-48;
	D1=d1*1;
	D2=d2*2;
	D3=d3*3;
	D4=d4*4;
	D5=d5*5;
	D6=d6*6;
	D7=d7*7;
	D8=d8*8;
	D9=d9*9;
	D10=d10*10;
	sum=D1+D2+D3+D4+D5+D6+D7+D8+D9+D10;
	if(sum%11==0)
	{
		printf("Legal ISBN\n");
	}
	else
	{
		printf("illegal ISBN\n");
	}
	
}
else
{
	printf("illegal ISBN\n");
}
	return 0;
}
