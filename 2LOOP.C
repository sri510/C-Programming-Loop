/* To print all natural numbers in reverse from n to 1 */
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
clrscr();
printf("Enter starting number: ");
scanf("%d",&n);

for(i=n;i>=1;i--)
{
printf("%d\n",i);
}
getch();
}