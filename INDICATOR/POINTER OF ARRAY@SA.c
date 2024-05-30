#include<stdio.h>
#include<conio.h>
void main()
{
int a=9, b=16,c=26;
int *ptr[3]={&a,&b,&c};
int i;
for (i=0;i<3;i++)
{
	printf("%d\n",*ptr[i]);
	}	
getch();	
}