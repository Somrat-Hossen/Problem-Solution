#include <bits/stdc++.h>
#define mx 1000000
typedef long long ll;
using namespace std;

vector<int>vec;

 int n,i,j,m,x,y,pos,cnt,z,tc;

int main()
{
   string str,st;
  cin>>tc;
 for(j=1;j<=tc;j++)
 {
      vec.clear();
      cin>>str>>st;
      pos=str.find(st);
      while(pos>=0)
      {
         vec.push_back(pos);
         pos=str.find(st,pos+st.size());

      }
    //cout<<pos<<" "<<str<<endl;
    if(vec.size()==0) puts("Not Found");
    else
    {
        cout<<vec.size()<<endl;
        for(i=0;i<vec.size();i++)
        {
           cout<<vec[i]+1<<" ";
        }
       cout<<endl;
    }
    if(j!=tc) cout<<endl;
  }



    return 0;
}

