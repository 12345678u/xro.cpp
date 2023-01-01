#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
char ch;
int n;
long int num;
float f;
double d;
long double ld;
printf("Enter the character:/n");
scanf("%c",&ch);
printf("Enter the integer:/n");
scanf("%int",&n);
printf("Enter the long int:/n");
scanf("%ld",&num);
printf("Enter the float:/n");
scanf("%f",&f);
printf("Enter the double:/n");
scanf("%lf",&d);
printf("Enter the long double:/n");
scanf("%Lf",&ld);
printf("Character:%c\n",ch);
printf("integer:%int\n",n);
printf("long int:%ld\n",num);
printf("float:%f\n",f);
printf("double:%lf\n",d);
printf("long double:%Ld\n",ld);

}
