
#include <iostream>
 using namespace std;

int main()
{
  int n,i,k;
  int count=0;
  cout<<"Enter a non negative number"<<endl;
  cin>>n;
  if (n>=0);
  {
   for(i=1;i<=n;i++)
   {
   k=i;
   while(k%5==0)
   count++;
   k=k/5;
  }
 }
}