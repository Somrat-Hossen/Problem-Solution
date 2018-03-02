#include<bits/stdc++.h>
#include<math.h>
#define PI acos(-1)
 
using namespace std;
 
   int main()
     {
        int t,i=1,n;
        double R,x,r;
        cin>>t;
        while(t--)
        {
            cin>>R>>n;
            r=(R*sin(PI/n))/(1+sin(PI/n));
            printf("Case %d: %.10lf\n",i,r);
            i++;
        }
         return 0;
     }
