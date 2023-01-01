#include<iostream>
using namespace std;
int factorial (int);
bool iscurious (int);
int main()
{
 cout<<"list of curious number:"<<endl;
 for(int i=1;i<=10000;i++)
 {
   bool curious= iscurious(i);
   if(curious==true)
    cout<<i<<endl;
 }
 return 0;
}

int factorial (int num)

{
 int p;
   if(num==0)
   return 1;


   else p=num*factorial(num-1);

   return p;
}



bool iscurious (int num)
{
int sum=0,t=num,digit;
while(t!=0)
{
digit=t%10;
sum=sum + factorial (digit);
t=t/10;
}
if(sum==num)
return true;
else
return false;

}








