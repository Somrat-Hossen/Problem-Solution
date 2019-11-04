#include<bits/stdc++.h>
#define mx 100005
using namespace std;

deque<int>dq;
int arr[mx];
vector<int>vec;

int n,cnt,k,len;
int vis[mx];

int minlen=INT_MAX;


int main()
{
   freopen("in.txt","r",stdin);

   cin>>n>>k;

   for(int i=0;i<n;i++) cin>>arr[i];

   for(int i=0;i<n;i++)
   {
      dq.push_back(arr[i]);

      if(arr[i]>=1 && arr[i]<=k) ///negative no not your counting part
      {
         vis[arr[i]]++;
         if(vis[arr[i]]==1) ///keep track of the distinc element
         {
            cnt++;
         }
      }

      if(cnt==k and dq.size()>=k)
      {
         while(cnt==k)
         {
           // cout<<cnt<<" ";
            int tmp=dq.front();
            int siz=dq.size();
            minlen=min(siz,minlen);
            vis[tmp]--;
            dq.pop_front();
            if(vis[tmp]==0 and (tmp>=1 && tmp<=k) ) cnt--;
         }
      }
   }
   cout<<"Min length is :"<<minlen<<endl;



   return 0;
}

