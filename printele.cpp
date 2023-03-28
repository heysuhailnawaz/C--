#include<iostream.h>
#include<conio.h>
void main()
{
int a[5],i;
clrscr();
cout<<"\n enter elements in an array";
for(i=0;i<=4;i++)
{
cin>>a[i];
}
cout<<"\n elements of an array is";
for(i=0;i<=4;i++)
{
cout<<"value="<<a[i];
}
getch();
}