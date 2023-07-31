/* To print all odd numbers from 1 to n */
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
clrscr();
printf("Print all odd numbers till : ");
scanf("%d",&n);

printf("All odd numbers between 1 to %d are : \n",n);

for(i=1;i<=n;i++)
{
if(i%2!=0)
{
printf("%d\t",i);
}
}
getch();
}