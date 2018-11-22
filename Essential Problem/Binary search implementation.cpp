#include<bits/stdc++.h>
using namespace std;

int ar[100];
int i,j,n,mid,low,high,item,call;

int bin_search(int arr[],int n,int item)
{
   low=0;high=n-1;
   while(low<=high)
   {
     mid=(low+high)/2;
     if(item==arr[mid]) return mid;

     else if(item>arr[mid])
     {
        low=mid+1;
     }
     else
     {
       high=mid-1;
     }

   }
 return 0;
}


int main()
{

 int arr[]={10,20,30,35,45,78,96,89,98,100};
 n=sizeof(arr)/sizeof(arr[0]);
 cin>>item;

 call=bin_search(arr,n,item);
 if(call)
  {
   cout<<"Item is found and it is in:"<<call+1<<"th positon"<<endl;
  }
 else
  {
   cout<<"Item is not found"<<endl;
  }

 return 0;
}
