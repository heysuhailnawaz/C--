#include<iostream.h>
#include<conio.h>

void main()
{
int i,j;
clrscr();
for(i=1;i<=4;i++)
{
for(j=1;j<=i;j++)
{
cout<<"\t"<<j;
}
cout<<"\n";
}
getch();
}