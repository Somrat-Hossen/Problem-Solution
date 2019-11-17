#include <bits/stdc++.h>
#define mx 100005
typedef long long ll;
using namespace std;



 int n,i,j,m,x,y,z,q;
 int arr[mx],arr1[mx];
 string str;
 multiset<int> st;
 vector<int>vec;

int main()
{

   ///freopen("in.txt","r",stdin);
   ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);

      cin>>n;for(int i=0;i<n;i++) cin>>arr[i];
      int tmp=0,cnt=0;

      for(int i=0;i<n;i++)
      {
         tmp++;
        if(st.empty() && arr[i]>0) { st.insert(arr[i]);cnt+=arr[i];continue;}
        else if(arr[i]<0)
        {
           if( st.count(-arr[i])<1) {cout<<-1;return 0;} ///
           else if(st.count(arr[i])>0) {cout<<-1;return 0;}
           else  st.insert(arr[i]),cnt+=arr[i];
        }

        else  if(arr[i]>0)
        {
           if(st.count(arr[i])>0) {cout<<-1;return 0;}
          else  st.insert(arr[i]),cnt+=arr[i];
        }


        if(cnt==0)
        {
           vec.emplace_back(tmp);
           st.clear();
           tmp=0;
           cnt=0;
        }
      }
      if(!st.empty()){cout<<-1;return 0;}
      if(vec.size()==0) {cout<<-1;return 0;}
      cout<<(vec.size())<<endl;
      for(auto x:vec) cout<<x<<" ";





    return 0;
}


