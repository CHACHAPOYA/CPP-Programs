#include<iostream.h>
int main()
{
int a,b,c,sum=0;
cin>>a;
c=a;
while(a>0)
{
b=a%10;
a=a/10;
sum=sum*10+b;
}
if(c==sum)
cout<<"Palindrome";
else
cout<<"Not Palindrome";
return 0;

}