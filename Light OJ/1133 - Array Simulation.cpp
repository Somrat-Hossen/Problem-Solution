#include<bits/stdc++.h>
using namespace std;


int main()
{
  vector<int> vec(101,0);
  int n,m,i,tc,x,y,z,cases;

   cin>>tc;
  for(cases=1;cases<=tc;cases++)
  {
     vec.clear();
     cin>>n>>m;

     for(i=0;i<n;i++)
     {
       cin>>vec[i];
     }

     while(m--)
     {
       char ch;
       cin>>ch;

       if(ch=='S')
       {
         cin>>x;
         for(i=0;i<n;i++)
         {
           vec[i]=vec[i]+x;
         }
       }

       else if(ch=='M')
       {
         cin>>x;
         for(i=0;i<n;i++)
         {
           vec[i]=vec[i]*x;
         }
       }

       else if(ch=='D')
       {
         cin>>x;
          for(i=0;i<n;i++)
         {
            vec[i]=vec[i]/x;
         }
        }

       else if(ch=='R')
       {
         int pos=n-1;
         for(i=0;i<n/2;i++)
         {
           x=vec[i];
           vec[i]=vec[pos];
           vec[pos]=x;
           pos--;
         }
       }

       else if(ch=='P')
       {
         cin>>x>>y;
         swap(vec[x],vec[y]);
       }

     }
     printf("Case %d:\n",cases);
     for(i=0;i<n;i++)
     {
      cout<<vec[i];
      if(i!=n-1) cout<<" ";
     }
     cout<<endl;
   }

   return 0;
}
