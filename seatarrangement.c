#include<stdio.h>
int main()
{
	int seatno;
	int mod;

	do
	{
	printf("enter the seat no\n");
	scanf("%d",&seatno);
	if(seatno>=1&&seatno<=108)
	{
		mod=seatno%12;
	switch(mod)
	{
		case 0:printf("%d ws",seatno-11);
		break;
		
		case 1:printf("%d ws",seatno+11);
		break;
		
		case 2:printf("%d ms",seatno+9);
		break;
		
		case 3:printf("%d as",seatno+7);
		break;
		
		case 4:printf("%d as",seatno+5);
		break;
		
		case 5:printf("%d ms",seatno+3);
		break;
		
		case 6:printf("%d ws",seatno+1);
		break;
		
		case 7:printf("%d ws",seatno-1);
		break;
		
		case 8:printf("%d ms",seatno-3);
		break;
		
		case 9:printf("%d as",seatno-5);
		break;
		
		case 10:printf("%d as",seatno-7);
		break;
		
		case 11:printf("%d ms",seatno-9);
		break;
		
		case 12:printf("%d ws",seatno-11);
		break;
		
	};}
}while(seatno>=1&&seatno<=108);
return 0;
}
