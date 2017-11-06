#include<iostream.h>
int main()
{
int arr[]={1,2,3,4,5};
int length=*(&arr+1)-arr;
cout<< length<<endl;
return 0;
}

