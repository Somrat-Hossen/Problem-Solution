#include<bits/stdc++.h>

using namespace std;

int main()
{
 //freopen("int.txt","r",stdin);
 int r1,c1,r2,c2;
 printf("Enter row1,col1,row2,col2\n");
 scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
 int ar[r1][c1],arr[r2][c2],res[r1][c2],i,sum=0,j,k;

  for(i=0;i<r1;i++)
  {
      for(j=0;j<c1;j++)
      {
      scanf("%d",&ar[i][j]);
      }
  }

  for(i=0;i<r2;i++)
  {
      for(j=0;j<c2;j++)
      {
      scanf("%d",&arr[i][j]);
      }
  }

   for(i=0;i<r1;i++)
  {
      for(j=0;j<c1;j++)
      {
      printf("%d ",ar[i][j]);
      }
      cout<<endl;
  }
     cout<<endl;
  for(i=0;i<r2;i++)
  {
      for(j=0;j<c2;j++)
      {
      printf("%d ",arr[i][j]);
      }
      cout<<endl;
  }
  cout<<endl;

  for(i=0;i<r1;i++)
  {
    for(j=0;j<c2;j++)
    {sum=0;
        for(k=0;k<c1;k++)
        {
         sum+=ar[i][k]*arr[k][j];
        }
        res[i][j]=sum;
    }
  }

  for(i=0;i<r1;i++)
  {
      for(j=0;j<c2;j++)
      {
      printf("%d ",res[i][j]);
      }
    cout<<endl;
  }

return 0;
}









