/* To multiplication table of a number*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,num;
clrscr();

printf("Enter number to print table: ");
scanf("%d",&num);

for(i=1;i<=10;i++)
{
printf("%d * %d = %d\n",num,i,(num*i));
}
getch();
}