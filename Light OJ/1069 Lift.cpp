#include<bits/stdc++.h>
 
using namespace std;
 
int main()
      {
        int position,lift,distance,final,t,time,i=1;
        cin>>t;
        while(t--)
        {
            cin>>position>>lift;
            if(position<=lift)
            {
            distance=lift-position;
            final=position-0;
            time=distance*4+3+3+5+final*4+3+5;
            }
            else
            {
            distance=position-lift;
            final=position-0;
            time=distance*4+3+3+5+final*4+3+5;
            }
            printf("Case %d: %d\n",i,time);
            i++;
        }
 
          return 0;
      }
