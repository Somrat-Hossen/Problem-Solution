#include <bits/stdc++.h>
#define mx 200005
typedef long long ll;
using namespace std;



 int n,i,j,m,x,y,z,q;
 int arr[mx],vis[mx];
 string str;

deque<int>dq;
deque<int>::iterator it;

void Clear()
{
   dq.clear();
   for(int i=0;i<mx;i++) vis[i]=0;
}

int main()
{

   ///freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);


	  cin>>q;

	  while(q--)
     {


      cin>>n;

      for(int i=0;i<n;i++) cin>>arr[i];

      int minlen=INT_MAX;

      //for(int i=0;i<n;i++) cout<<arr[i];

      for(int i=0;i<n;i++)
      {
         vis[arr[i]]++;

         dq.push_back(arr[i]);

         if( (vis[arr[i]])>1)
         {
            while(vis[arr[i]]>1 && !dq.empty())
            {
               int len=dq.size();
               minlen=min(minlen,len);
               int tmp=dq.front();
               vis[tmp]--;
               dq.pop_front();
            }
         }
      }

      //for(it=dq.begin();it!=dq.end();it++) cout<<*it<<" ";

      if(minlen==INT_MAX) cout<<-1<<endl;
      else cout<<minlen<<endl;

      Clear();
     }


    return 0;
}

