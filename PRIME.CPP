#include<iostream.h>
int main()
{
int a;
int count=0;
cin>>a;
for(int i=1;i<=a;i++)
{
if(a%i==0) count++;
}
if(count==2||a==1) cout<<"Prime";
else cout<<"Not Prime";

return 0;
}