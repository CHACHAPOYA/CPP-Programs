#include<iostream.h>
#include<conio.h>
int main()
{
int x,mul=1;//values of nth number
cin>>x;//input from user
x=x+1;
while(x-->=2)
{
mul=mul*x;
}
cout<<mul<<endl;

return 0;
}
