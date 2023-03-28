#include<iostream.h>
#include<conio.h>
void main()
{
int a[3][3],i,j;
clrscr();

cout<<"\nenter elements in array";
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
cin>>a[i][j];
}
}
cout<<"\n elements of matrix is";
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
cout<<"\t<<a[i][j];
}
cout<<"\n";
}
getch();
}