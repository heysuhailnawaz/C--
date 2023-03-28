#include<iostream.h>
#include<conio.h>
void main()
{
int i,n,fact==1;
clrscr();
cout<<"\n enter the value of n";
cin>>n;
for(i=1;i<=n;i++)
{
fact=fact*i;
}
cout<<"\n factorial of a given no="
<<fact;
getch();
}