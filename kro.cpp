#include<iostream>
using namespace std;
int main()
{
 int i,n,k;
 int count=0;
cout<<"Enter the number: "<<endl;
cin>>n;

if(n>=0)
{for(i=1;i<=n;i++)
{k=i;while(k%5==0)
{count++;k=k/5;}
}
cout<<"Number of zeroes at the end of:"<<n<<"!="<<count<<endl;
}

else
cout<<"Invalid Input"<<endl;
}