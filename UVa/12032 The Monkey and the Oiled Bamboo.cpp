#include <bits/stdc++.h>
#define mx 100000
typedef long long ll;
using namespace std;

int arr[mx+2];
int n,i,j,m,y,z,tc,tmp,x;

bool Check(int cap)
{
   ///cout<<"C"<<cap<<endl;
  int k=0,dis;
  for(int i=0;i<n;i++)
  {
    dis=abs(arr[i]-k);
    if(cap==dis) cap--;
    else if(dis>cap) return 0;
    k=arr[i];
  }
  return 1;
}

void Test(int k)
{

   while(true)
   {
     int res=Check(k);
     if(res==1)
     {
       cout<<k<<endl;
       break;
     }

    else if(res==0)
    {
      k++;
    }
   }
}


int main()
{

    ///freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);

   cin>>tc;
   int diff,mx_dif=0;

   for(int cs=1;cs<=tc;cs++)
   {
      memset(arr,0,sizeof(arr));
      cin>>n;
      diff=0;
      mx_dif=0;


      for(int i=0;i<n;i++)
      {
         cin>>arr[i];
         mx_dif=max(mx_dif,(arr[i]-diff));
         diff=arr[i];
      }

     // cout<<mx_dif<<endl;
      cout<<"Case "<<cs<<": ";
      Test(mx_dif);
   }






    return 0;
}

