#include<bits/stdc++.h>
#define mx 100005
using namespace std;
typedef long long ll;

set<int>st[27];


int main()
{
   ///freopen("in.txt","r",stdin);
   ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);

	char str[mx];
	int type,q,n,l,r,len,pos;
	char ch;

	scanf("%s",str+1);

	len=strlen(str+1);

	for(int i=1;i<=len;i++)
   {
      ///a=0 ,b=1,c=2.........
      /// put position of a to 0,position of b to 1, and so on ................
      st[str[i]-'a'].insert(i);
   }

	scanf("%d",&q);

	while(q--)
   {
      int res=0;

      scanf("%d",&type);

      if(type==1)
      {
         scanf("%d %s",&pos,&ch);

         st[str[pos]-'a'].erase(pos);
         st[ch-'a'].insert(pos);
         str[pos]=ch;
      }
      else
      {
         scanf("%d %d",&l,&r);

         for(int i=0;i<=25;i++)
         {
            auto it=st[i].lower_bound(l);
            if(*it>=l && *it<=r) res++;///if the fond position in between our range ,increase res
         }
        printf("%d\n",res);
      }
   }













  return 0;
}

