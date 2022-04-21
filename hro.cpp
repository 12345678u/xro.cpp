#include<stdio.h>
using namespace std;
enum month{ JAN,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC};
enum day{MON,TUE,WED,THU,FRI,SAT,SUN};
int numSundaysFirst();
bool isLeap(int);
int main()
{
int num;
num=numSundaysFirst();
cout <<"Number of sundays on 1st of the month during 20th century="<< num << endl;
return 0;
}

int numSundaysFirst()
{
   int firstday , sundaycount , lastday;
   firstday= MON;
   if(isLeap(1900))
   lastday= TUE; 
   else
   lastday= MON;
   sundaycount= 0;
   
   
   for(int year=1901;year<=2000;year++)
   {
       for (int month =JAN; month<=DEC;month++ )
       {
           firstday= (lastday+1)%7;
           if(firstday==SUN)
           sundaycount++;
           switch(month)
        {
         case JAN;
         case MAR;
         case MAY;
         case JUL;
         case AUG;
         case OCT;
         case DEC;
            lastday= (firstday +2)%7;
        break;
        case APR;
        case JUN;
        case SEP;
        case NOV;
            lastday=( firstday +1)%7;
        break;
        case FEB;
            lastday=( firstday + 6)%7;
        break;  
        
        }
     }



}
return sundaycount;
}
bool isLeap(int year)
{
 if ((year%100!=0)&&(year%4==0)||(year%400==0))
 return true;
 else
 return false;

}





