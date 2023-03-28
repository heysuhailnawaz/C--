#include<iostream.h>
#include<conio.h>

void main()
{
int i=1;
clrscr();

Method 1

do
{
i++;
}
while(i<=10);
cout<<"\n value="<<i;
getch();

Method 2

do
{
i++;
cout<<"\n value="<<i;
getch()
}
while(i<=10);
}