/* To sum of natural numbers between 1 to n */
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,sum=0;
clrscr();

printf("upper limit : ");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
sum += i;
}
printf("Sum of first %d natural numbers = %d",n,sum);

getch();
}