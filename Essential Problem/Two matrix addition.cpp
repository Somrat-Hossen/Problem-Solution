#include<bits/stdc++.h>

using namespace std;

int main()
{
 int n;
 scanf("%d",&n);
  int ar[n][n],arr[n][n],res[n][n],i,sum=0,j;
  printf("Enter the value for input\n");

  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
      scanf("%d",&ar[i][j]);
      }
  }
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
      scanf("%d",&arr[i][j]);
      }
  }

 for(i=0;i<n;i++)
 {
     for(j=0;j<n;j++)
    {
     res[i][j]=ar[i][j]+arr[i][j];
    }
  }

  for(i=0;i<n;i++)
 {
     for(j=0;j<n;j++)
    {
    cout<<res[i][j]<<" ";
    }
    cout<<endl;
  }
return 0;
}









