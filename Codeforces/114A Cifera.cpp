#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
  vector<int>vec;
  vector<int>::iterator it;
  int k,l,i;
  cin>>k>>l;
  for(i=1; ;i++)
  {
     if(pow(k,i)>INT_MAX) break;
     vec.push_back(pow(k,i));
  }
 /* for(i=0;i<vec.size();i++)
  {
     cout<<vec[i]<<endl;
  }
  cout<<INT_MAX<<endl;
  */

  it=lower_bound(vec.begin(),vec.end(),l);

  if(l== *it)
  {
    puts("YES");
    int pos=it-vec.begin();
    cout<<pos<<endl;
  }
  else puts("NO");

  return 0;
}
