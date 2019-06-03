#include<stdio.h>
int main()
{
	char s[9];
	scanf("%s",s);
	int flag1,flag2;
	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11;
	if(s[0]>=48&&s[0]<=57)
	{
		if(s[1]>=48&&s[1]<=57)
		{
			if(s[2]>=65&&s[2]<=90)
			{
				if(s[3]>=48&&s[3]<=57)
				{
					if(s[4]>=48&&s[4]<=57)
					{
						if(s[5]>=48&&s[5]<=57)
						{
							if(s[6]=='-')
							{
								if(s[7]>=48&&s[7]<=57)
								{
									if(s[8]>=48&&s[8]<=57)
									{
									n1=s[0]-47;
									n2=s[1]-47;
									n3=n1+n2;
									
									n4=s[3]-47;
									n5=s[4]-47;
									n6=s[5]-47;
									
									n9=n4+n5;
									n10=n5+n6;
									
									n7=s[7]-47;
									n8=s[8]-47;
									n11=n7+n8;
									
									
									if((n3&1)==1||(n9&1)==1||(n10&1)==1||(n11&1)==1)
									{
									flag1=0;
									}
									else if((n3&1)==0||(n9&1)==0||(n10&1)==1||(n11&1)==1)
									if(s[2]=='A'&&s[2]=='E'&&s[2]=='I'&&s[2]=='O'&&s[2]=='U'&&s[2]=='Y')
									{
									flag2=1;
								}else
								{
									flag2=0;
								}
									
									
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
										
									}
								}
							}
						}
					}
				}
			}
		}
	}
if(flag1==1&&flag2==1)
printf("valid\n");
else if(flag2==0&&flag2==0)
printf("invalid\n");
	
return 0;	
}
