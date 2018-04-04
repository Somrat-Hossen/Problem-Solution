#include<bits/stdc++.h>
#include<math.h>
#define PI 3.14159
#include<iomanip>
 
using namespace std;
 
int main()
     {
         int t,i=1;
         cin>>t;
         while(t--)
         {
             double ox,oy,ax,ay,bx,by,c,r,result,final;
             cin>>ox>>oy>>ax>>ay>>bx>>by;
 
             c=sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
             r=sqrt((ox-ax)*(ox-ax)+(oy-ay)*(oy-ay));
             result=acos(((2*r*r)-(c*c))/(2*r*r));
             final=result*r;
 
             cout<<"Case "<<i<<": "<<fixed<<setprecision(8)<<final<<endl;
             i++;
         }
         return 0;
     }
