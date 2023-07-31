/* To print all alphabets from a to z */
#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("Alphabets from a-z are : \n");

for(ch='a';ch<='z';ch++)
{
printf("%c\t",ch);
}
getch();
}