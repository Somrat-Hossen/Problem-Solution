#include <bits/stdc++.h>
#define mx 100005
typedef long long ll;
using namespace std;



 int n,i,j,m,x,y,z;


int main()
{

   ///freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);

	int a,b,c,d,targetsum,csum;

	  int arr[mx];

	  while(cin>>n>>targetsum)
     {
          for(int i=0;i<n;i++) cin>>arr[i];

         deque<int>dq;
         int minlen=INT_MAX;
         csum=0;

         for(int i=0;i<n;i++)
         {
              if(arr[i]>=targetsum){minlen=1;break;}

              dq.push_back(arr[i]);
              csum+=arr[i];

              if(csum>=targetsum)
              {
                  while(csum>=targetsum)
                  {
                     int len=dq.size();
                     minlen=min(minlen,len );
                     csum-=dq.front();
                     dq.pop_front();
                  }
              }
         }
         if(minlen==INT_MAX) minlen=0;
         cout<<minlen<<endl;
     }




    return 0;
}

