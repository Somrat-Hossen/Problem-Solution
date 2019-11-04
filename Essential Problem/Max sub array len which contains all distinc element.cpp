#include<bits/stdc++.h>
#define mx 100005
using namespace std;

deque<int>dq;
int arr[mx];


int n,cnt,k,len;
map<int,int>mp;

int maxlen=INT_MIN;


int main()
{
   freopen("in.txt","r",stdin);

   cin>>n;

   for(int i=0;i<n;i++) cin>>arr[i];///arr 10^9

   for(int i=0;i<n;i++)
   {
      cnt=0;
      if(mp[arr[i]]==0)
      {
         mp[arr[i]]++;
         dq.push_back(arr[i]);
         cnt++;

      }

        if(cnt==0 || (cnt==1 && i==n-1))///if from some range to last one all are distinc
         {
           // cout<<cnt<<" ";
            int siz=dq.size();
            maxlen=max(siz,maxlen);
            while(!dq.empty())
            {
               int tmp=dq.front();
                mp[tmp]--;
                dq.pop_front();///remove from the left side of the dequeue
            }
            dq.push_front(arr[i]);
            mp[arr[i]]++;
         }
   }
   ///if the minlen not changed from his initial value then not possible
   cout<<"Max length is :"<<maxlen<<endl;



   return 0;
}
