#include<stdio.h> 
struct
{
int year; 
int month; 
int day;
}date; 
int main()
{
int days,i,sum;
date.year=2008;
date.month=8;
date.day=8;
	char y[]={0,31,29,31,30,31,30,31,31,30,31,30,31};
		if((date.year%4==0&&date.year%100!=0)||date.year%400==0)
		{}
	else
	y[2]=28;
	for(i=0;i<12;i++)
	{
		sum=sum+y[i];
	}
printf("%d��%d��%d����%d���%d��",date.year,date.month,date.day,date.year,sum); 
	return 0;
}
