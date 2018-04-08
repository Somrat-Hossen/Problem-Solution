#include<bits/stdc++.h>
#include<string.h>

using namespace std;

struct student
    {
        string name;
        int len;
        int wid;
        int high;
    };

    int cmp(student x,student y)
    {
         if((x.len*x.wid*x.high)==(y.len*y.wid*y.high))
            return (x.len*x.wid*x.high);
        return (x.len*x.wid*x.high)>(y.len*y.wid*y.high);
    }

int main()
 {

     student a[10000];
     int n,i,j=0,t;
     cin>>t;

  while(t--)
  {
         cin>>n;
         for(i=0;i<n;i++)
         {
            cin>>a[i].name>>a[i].len>>a[i].wid>>a[i].high;
         }
         sort(a,a+n,cmp);

         if(a[0].len*a[0].wid*a[0].high>a[n-1].len*a[n-1].wid*a[n-1].high)
         {
             cout<<"Case "<<++j<<": "<<a[0].name<<" took chocolate from "<<a[n-1].name<<endl;
         }
        else if(a[0].len*a[0].wid*a[0].high==a[n-1].len*a[n-1].wid*a[n-1].high)
         {
              cout<<"Case "<<++j<<": no thief"<<endl;
         }
 }
         return 0;
     }
