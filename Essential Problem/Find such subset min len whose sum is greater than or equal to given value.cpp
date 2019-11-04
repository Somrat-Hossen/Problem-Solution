#include<bits/stdc++.h>
#define mx 100005
using namespace std;

deque<int>dq;
int arr[mx];
vector<int>vec;

int n,value,csum=0;

void Solve()
{
   while(csum>=value)
   {
      vec.push_back(dq.size());
      csum-=dq.front();
      dq.pop_front();
   }
}


int main()
{
  // freopen("in.txt","r",stdin);

   cin>>n>>value;

   for(int i=0;i<n;i++) cin>>arr[i];

   for(int i=0;i<n;i++)
   {
      if(arr[i]>=value){vec.push_back(1);break;}

      dq.push_back(arr[i]);
      csum+=arr[i];

      if(csum>=value)
      {
         Solve();
      }
   }

   if(vec.empty()) cout<<"Impossible to find the value"<<endl;
   else
   {
       sort(vec.begin(),vec.end());
       cout<<"Minimum length of the subarray is: "<<vec[0]<<endl;
   }


   return 0;
}
