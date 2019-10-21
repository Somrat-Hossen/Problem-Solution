#include<bits/stdc++.h>
#define mx 100005
using namespace std;

void Maximum(int arr[],int n,int k)
{
   int i;
   deque<int>dq(k);

   ///first subarray is processed
   for(i=0;i<k;i++)
   {
      while(!dq.empty() && arr[i]>=arr[dq.back()]) dq.pop_back();///keep the max elem to the left of dq
      dq.push_back(i);
   }

   for(;i<n;i++) ///rest of the subarray is processed
   {
      cout<<arr[dq.front()]<<" ";

      ///if the front elem is less than our range the pop it
      while(!dq.empty() && dq.front()<i-k+1) dq.pop_front(); ///remove the unwanted element from the current window


      while(!dq.empty() && arr[i]>=arr[dq.back()]) dq.pop_back();
      dq.push_back(i);

   }

   cout<<arr[dq.front()]<<endl; ///print last element

}



int main()
{

   int arr[mx];

   int n,k;

   cin>>n>>k;

   for(int i=0;i<n;i++) cin>>arr[i];

   Maximum(arr,n,k);

   return 0;
}
