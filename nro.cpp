#include<stdio.h>
#include<iostream>
using namespace std;
class Number
{private:
int num;
public:
void setNumber (int n)
{num = n;}
int getNumber()
{return num;}
void printNumber()
{cout<<num<<endl;}
boolisNegative()
{if (num<0)
return true;
else
return false;}
bool isDivisibleBy (int n)
{if (n==0)
return false;
else
{if (num %n==0)
return true;
else 
return false;}}
int absoluteValue()
{if (num>=0)
return num;
else
return-1*num;}};
int main()
{Number x;
 x.setNumber(10000);
 x.printNumber();
 if(x.isDivisibleBy(5)==true)
 cout<<"5 divides"<<x.getNumber()<<endl;
 else
 cout<<"5 does not divide"<<x.getNumber()<<endl;
 cout<<"Absolute Value of"<<x.getNumber()<<"is"<<x.absoluteValue()<<endl;}


















