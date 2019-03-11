#include<bits/stdc++.h>
using namespace std;

int i,pre_cnt,res,cur_cnt=1,pre,now,n;

int main()
{

    ///freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);

  cin>>n;
  cin>>pre;prev

  for(i=1;i<n;i++)
  {
     cin>>now;
     if(pre==now) cur_cnt++;

     else
     {
        pre_cnt=cur_cnt;                     /// Store the len of sequence
        cur_cnt=1;                            /// Make the cur 1,because the two value is not equal ,so for new input cur 1
     }

     res=max(res,min(pre_cnt,cur_cnt)*2);    /// Min betwen two consecutive value then multiply by two

     pre=now;
  }

  cout<<res<<endl;



  return 0;
}

