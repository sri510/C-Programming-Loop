/* To sum of all odd numbers between 1 to n */
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,sum=0;
clrscr();

printf("Enter upper limit : ");
scanf("%d",&n);

for(i=1;i<=n;i+=2)
{
sum += i;
}
printf("Sum of all odd numbers between 1 to %d = %d",n,sum);

getch();
}