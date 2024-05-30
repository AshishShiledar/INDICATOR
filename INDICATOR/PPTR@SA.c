#include<stdio.h>
#include<conio.h>
void main()
{
int a=926;
int*ptr;
int**pptr;
ptr=&a;
pptr=&ptr;
printf("%d\n",a);
printf("%d\n",*ptr);	
printf("%d\n",**pptr);
getch();		
}