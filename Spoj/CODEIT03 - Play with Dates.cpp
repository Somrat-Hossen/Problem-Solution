#include<bits/stdc++.h>
using namespace std;

int main()
{
   map<int,int>year;
   map<int,int>mon;
   map<int ,string> day;

    day[0]="Saturday";day[1]="Sunday";day[2]="Monday";day[3]="Tuesday";  day[4]="Wednesday"; day[5]="Thursday";
    day[6]="Friday";

    /* month code  [6 4 2 0] . 2000=6 .........2300=0 ,again 2024=6. and 1900=0,1800=2 .....reverse .*/
   year[20]=6; year[21]=4; year[22]=2; year[23]=0; year[24]=6; year[25]=4; year[26]=2; year[27]=0;
   year[28]=6; year[29]=4; year[30]=2;

  mon[3]=4;  mon[4]=0;  mon[3]=4;  mon[5]=2;  mon[6]=5;  mon[7]=0;  mon[8]=3;  mon[9]=6;  mon[10]=1;
  mon[11]=4;  mon[12]=6;

   int dayy,month,yearr,leap,tmp,x,cnt,last_two_dig,tc;
   cin>>tc;

 while(tc--)
 {
    cin>>dayy>>month>>yearr;
   if(yearr%400==0 || (yearr%4==0 && yearr%100!=0))
   {
       mon[1]=0; mon[2]=3;
   }
   else
   {
     mon[1]=1; mon[2]=4;
   }

    last_two_dig=yearr%100;

   tmp=dayy+mon[month]+last_two_dig+(last_two_dig/4)+year[yearr/100];
   //cout<<dayy<<endl<<mon[month]<<endl<<last_two_dig<<endl<<(last_two_dig/4)<<endl<<year[yearr/100];
   cnt=tmp%7;
   //cout<<tmp<<" "<<cnt<<endl;
   cout<<day[cnt]<<endl;
}




  return 0;
}
