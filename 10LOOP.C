/* To count number of digit in an integer */
#include<stdio.h>
#include<conio.h>
void main()
{
long long num;
int count=0;
clrscr();

printf("Enter any number : ");
scanf("%lld",&num);
do
{
count++;
num /= 10;
}
while(num !=0);

printf("Total digits: %d",count);

getch();
}