/* To print all natural numbers from 1 to n  */
#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
clrscr();
printf("Enter any number: ");
scanf("%d",&n);

printf("Natural number from 1 to %d : \n",n);
for(i=1;i<=n;i++)
{
printf("%d\n",i);
}
getch();
}