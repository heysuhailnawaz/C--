#include<iostream.h>
#include<conio.h>

void main()

{

int n,b,rev=0,rem;
clrscr();
cout<<"\n enter the value of n";
cin>>n;
b=n
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10
}
if(b==n)
{
cout<<"\n pallindrome no:";
else
{
cout<<"\n not pallindrome no";
}
getch();
}