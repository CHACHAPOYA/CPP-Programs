#include<iostream.h>
int main()
{
int a,b;
cin>>a>>b;//range inputs
for (int i=a;i<=b;i++)
{
int count=0;
for (int j=1;j<=i;j++)
{
if(i%j==0) count++;
}
if(count==2||i==1)
cout<<i<<endl;    //printing only prime numbers
}
return 0;
}