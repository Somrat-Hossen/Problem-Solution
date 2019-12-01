#include <bits/stdc++.h>
#define mx 100005
typedef long long ll;
using namespace std;




set<string>st;

 char Change(string str)
 {
    for(int i=0;i<=9;i++)
    {
       str[0]=char(i+'0'); ///if changing string prevously in our set then it is accepted ,else try next char
       if(st.find(str)==st.end()) return (str[0]);
    }
 }

int main()
{

   ///freopen("in.txt","r",stdin);
   ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);

   string str[11];
   int q,n;



   cin>>q;
   while(q--)
   {
      cin>>n;

      for(int i=0;i<n;i++) cin>>str[i],st.insert(str[i]);
      int need=n-st.size();

      if(need==0) goto print;///skip change

      for(int i=0;i<n-1;i++)
      {
         for(int j=i+1;j<n;j++)
         {
            if(str[i]==str[j])
            {
               str[j][0]= Change(str[j]);
               //break;
               st.insert(str[j]);///include newly changed string into our list

            }
         }
      }

      print:
      cout<<need<<endl;
      for(int i=0;i<n;i++) cout<<str[i]<<endl;
      st.clear();
   }



    return 0;
}


