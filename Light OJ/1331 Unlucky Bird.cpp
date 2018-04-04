#include<bits/stdc++.h>
 
using namespace std;
 
int main()
      {
        double v1,v2,v3,a1,a2,d,t2,sb,t1,s1,s2,ft;
        int t,i=1;
        cin>>t;
        while(t--)
        {
            cin>>v1>>v2>>v3>>a1>>a2;
            t1=v1/a1;
            t2=v2/a2;
 
            s1=(v1*v1)/(2*a1);
            s2=(v2*v2)/(2*a2);
            d=s1+s2;
 
            if(t1>t2)
            {
               ft=t1;
            }
            else
            {
                ft=t2;
            }
            sb=v3*ft;
            printf("Case %d: %lf %lf\n",i,d,sb);
            i++;
        }
 
          return 0;
      }
