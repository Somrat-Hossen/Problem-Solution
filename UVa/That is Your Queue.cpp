#include <bits/stdc++.h>
#define mx 1000000
typedef long long ll;
using namespace std;

int cs=1;

void Solve(int n,int q)
{
   list<int>arr;
   char ch;
   int x,limit;

   limit=min(n,1000);

   for(int i=1;i<=limit;i++) arr.push_back(i);

  printf("Case %d:\n",cs++);

   while(q--)
   {
     scanf(" %c", &ch);
     ///cin>>ch;

      if(ch=='E')
      {
         scanf("%d",&x);
         arr.remove(x);
         arr.push_front(x);

      }

      else
      {
         int tmp=arr.front();
         printf("%d\n",tmp);
         arr.pop_front();
         arr.push_back(tmp);
      }
   }

}

int main()
{

   ///freopen("in.txt","r",stdin);
   ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);


	int n,q,x;


	while(scanf("%d%d",&n,&q) && (n && q))
   {
      Solve(n,q);
   }

    return 0;
}

