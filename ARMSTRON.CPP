#include<iostream.h>
#include<math.h>
int main()
{
int b,sum=0,a,counter=0;
cin>>a;
int c=a;
while(a>0)
 {
 a=a/10;
 counter++;
 }
a=c;
while(a>0)
{
b=a%10;
sum=sum+pow(b,counter);
a=a/10;

}
if(c==sum)
cout<<"Armstrong";
else cout <<"Not Armstrong";

return 0;
}



