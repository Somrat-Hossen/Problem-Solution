#include<bits/stdc++.h>

using namespace std;
int main()
    {
         //freopen("input.txt","r",stdin);
        int i,n,max,index,array[100];
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>array[i];
        }
        //max=array[1];
         max=0;

        for(i=2;i<=n;i++)
        {
           if(max<array[i])
           {
               max=array[i];
               index=i;
           }
        }
        cout<<"Max: "<<max<<" "<<"Index : "<<index<<endl;
        return 0;
    }
