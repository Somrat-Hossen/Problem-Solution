#include <bits/stdc++.h>
#define mx 200005
typedef long long ll;
using namespace std;



 int n,i,j,m,x,y,z,q,a,b,res,cnt;
 int arr[mx];
 string str;

int neww[mx];
int tmp[mx],taken[mx];

int main()
{

   ///freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);


	int n,m,h,k,t,x,y;
	ll res;


	cin>>n;

	for(int i=1;i<=n;i++)
   {
      cin>>arr[i];
      if(arr[i]!=0)
      neww[arr[i]]=arr[i];
   }

   int j=0;
   for(int i=1;i<=n;i++)
   {
     if( neww[i]==0) tmp[++j]=i;///store the value which not in the array [1.....n]
   }

   int len=j;
   //for(int i=1;i<=len;i++) cout<<tmp[i]<<" ";cout<<endl;
   j=1;
   for(int i=1;i<=n;i++)
   {
      if(arr[i]==0)
      {
         if(j==len and i==tmp[j]) ///if the last element of the tmp array is equal to
         {
            cnt++;
            for(int k=i-1;k>=1;k--)
            {
               if((neww[arr[k]]==0)) ///check if the element was raplace earlier.we can swap the element
               { /// whose element was zero .
                  arr[i]=arr[k];
                  arr[k]=tmp[j];
                  break;
               }
            }
         }

         else if(i==tmp[j])
         {
            swap(tmp[j],tmp[j+1]);
           // cout<<tmp[j]<<" "<<tmp[j+1]<<endl;

            arr[i]=tmp[j];
         }
         else arr[i]=tmp[j];

         j++;
      }
   }

   //cout<<cnt<<endl;


 /// for(int i=1;i<=len;i++) cout<<tmp[i]<<" ";cout<<endl;

   for(int i=1;i<=n;i++)
   {
      cout<<arr[i]<<" ";
   }







    return 0;
}
