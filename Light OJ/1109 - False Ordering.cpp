#include <bits/stdc++.h>
#include <stdlib.h>
#include<iomanip>
#define mx 1000

using namespace std;

int cmp(const pair<int,int> a, const pair<int,int> b)
{
   if(a.second!=b.second)  return (a.second < b.second);    /// if divisor[a]<divisor[b]
     return (a.first>b.first);              ///if divisor[a]==divisor[b] ,so return a>b
}

int main()
 {
    vector< pair<int,int> >vctr(mx+1);
    int tc,n,i,sq,j;

     for(i=1;i<=mx;i++)
     {
        sq=sqrt(i);
        set<int>st;
         for(j=1;j<=sq;j++)
         {
             if(i%j==0)
             {
               st.insert(j);
               st.insert(i/j);
             }
         }
         vctr[i].first=i;
         vctr[i].second=st.size();
     }

     sort(vctr.begin(),vctr.end(),cmp);

    /* for(i=1;i<=mx;i++)
     {
        cout<< vctr[i].first<<" "<<endl;
     }*/

     scanf("%d",&tc);
     for(int i=1;i<=tc;i++)
     {
         scanf("%d",&n);
         printf("Case %d: %d\n",i,vctr[n].first);
     }

    return 0;
  }


