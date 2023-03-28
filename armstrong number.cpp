#include<iostream.h>
#include<conio.h>
void main()
{
int rem,rev=0,i,n;
clrscr();
cout<<"\n enter the value of n";
cin>>n
b=n
while(n!=0)
{
rem=n%10;
rev=+rem*rem*rem;
n=n/10;
}
if(b==rev)
{
cout<<"\n armstrong number";
}
else
{
cout<<"\n not armstrong number";
}
getch();
}