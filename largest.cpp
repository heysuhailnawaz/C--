#include<iostream.h>
#include<conio.h>

void main()
{
int a,b,c;
clrscr();

cout<<"\n enter the value of a,b,c";
cin>>a>>b>>c;
if(a>b && a>c)
{
cout<<"\n largest no"<<a;
}
else if (b>c)
{
cout<<"\n largest no="<<b;
}
else
{
cout<<"\n largest no="<<c;
}
getch();
}