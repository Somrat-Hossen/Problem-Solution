#include<bits/stdc++.h>
using namespace std;



void Solve(int root[],int need[],int n)
{
       stack<int>st;
       int cnt=0;

      for(int i=1,j=1;i<=n;i++)
      {
            int x=need[i];

            if(x==root[j]) j++;
             else if( j>n && ( (!st.empty()) && st.top()!=x ) ) {cout<<"No"<<endl;cnt=1;break;}

            else if(!st.empty() && (x==st.top()) )
            {
               st.pop();
            }

           else
           {
               while(x!=root[j] && j<=n)
               {
                  st.push(root[j]);
                  //if(j!=n)
                 j++;
               }
              j++;
          }
      }

     if(!cnt) cout<<"Yes"<<endl;
}

int main()
{
   int i,n,tmp,q,cnt;


   while(cin>>n && n)
   {
        int need[1002],root[1002];

       while(cin>>need[1] && need[1])
       {
           root[1]=1;
          for(int i=2;i<=n;i++) {cin>>need[i];root[i]=i;}

          Solve(root,need,n);
       }
       cout<<endl;
   }



   return 0;

}
