#include<bits/stdc++.h>
using namespace std;

int tc,q,n,i,l,r;

int main()
{
   ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);

   scanf("%d",&tc);

  for(int j=1;j<=tc;j++)
  {
     int arr[100002];

     scanf("%d%d",&n,&q);
     for(i=0;i<n;i++) scanf("%d",&arr[i]);

     printf("Case %d:\n",j);
     while(q--)
     {
      int index1,index2;
        scanf("%d %d",&l,&r);
        index1=lower_bound(arr,arr+n,l)-arr;
        index2=lower_bound(arr,arr+n,r)-arr;   /// Here we can use upperbound ,then op:just index2-index1.

        if(arr[index1]==l && arr[index2]==r)
        {
           printf("%d\n",(index2-index1)+1);;
        }
        else if(arr[index2]==r)
            printf("%d\n",(index2-index1)+1);

        else printf("%d\n",(index2-index1));
     }

  }
  return 0;
}
