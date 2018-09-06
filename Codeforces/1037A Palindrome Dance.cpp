#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int n,m,cnt=0,res=0,x,y,arr[25],i,j,a,b;
    cin>>n>>a>>b;
    j=n-1;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }

      for(int i=0;i<n/2;i++)
      {
          if((arr[i]==0 and arr[j]==2)||(arr[i]==2 and arr[j]==0))
            {
             res+=a; cnt++;
            }

          else if((arr[i]==1 and arr[j]==2)||(arr[i]==2 and arr[j]==1))
            {
             res+=b; cnt++;
            }

          else if(arr[i]==2 and arr[j]==2)
           {
                cnt++;
                res+=(min(a,b)*2);
          }
          else if((arr[i]==arr[j]))
                   {
                        cnt++;
                  }
          j--;
      }

      if((n&1) and (arr[j]==2)) res+=min(a,b);


    cout<<((cnt==n/2)?res:-1)<<endl;
    return 0;
}


