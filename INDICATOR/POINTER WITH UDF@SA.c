#include<stdio.h>
#include<conio.h>
void swap(int*a,int*b);
void swap(int*a,int*b)
{
int c;
c=*a;
*a=*b;
*b=c;	
}
main ()
{
int num1=9 , num2=26;
swap(&num1,&num2);
printf("%d\n",num1);
printf("%d\n",num2);	
getch();	
}