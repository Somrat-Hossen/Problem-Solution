#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int vec[100005];
map<ll,int>first,second;

ll sum,neww,i,n,j,pos,tmp,tmp1;

int main()
{

   ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);

    cin>>n;

     for(i=0;i<n;i++)
     {
        cin>>vec[i];
        sum+=vec[i];
     }

     for(i=1;i<n;i++)
     {
        second[vec[i]]++;
     }
     if(sum & 1)
     {
        cout<<"NO"<<endl;
        return 0;
     }

     first[vec[0]]=1;

    for(i=0;i<n;i++)
    {
          neww+=vec[i];

          if(neww==(sum/2))
          {
              cout<<"YES"<<endl;
              return 0;
          }

          else if(neww<sum/2)
          {
            tmp=sum/2-neww;   /// Delete from second part and add to first part
             if(second[tmp]>0)
             {
                cout<<"YES"<<endl;
                return 0;
             }
         }

         else
         {
            tmp1=neww-sum/2;
            if(first[tmp1]>0)
            {
              cout<<"YES"<<endl;
              return 0;
            }
         }

         first[vec[i+1]]++;
         second[vec[i+1]]--;
    }
    cout<<"NO"<<endl;




  return 0;
}


