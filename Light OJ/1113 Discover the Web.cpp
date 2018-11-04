#include <bits/stdc++.h>

using namespace std;


int main()
 {
     //freopen("in.txt","r",stdin);
     int i,tc;
     cin>>tc;

  for(int i=1;i<=tc;i++)
  {
     stack<string> ford;
     stack<string> bck;
     string url,st,input;
     url="http://www.lightoj.com/";
     bck.push(url);

     printf("Case %d:\n",i);

    while(cin>>input)
    {
     if(input=="VISIT")
      {
            cin>>input;
            bck.push(input);
           cout<<bck.top()<<endl;
           while(!ford.empty())
           {
            ford.pop();
           }
      }

        else if(input=="BACK")
         {
            if(bck.size()<=1)cout<<"Ignored"<<endl;
            else
            {
              ford.push(bck.top());
              bck.pop();
              cout<<bck.top()<<endl;
            }
         }

         else if(input=="FORWARD")
         {
           if(ford.empty())
            {
             cout<<"Ignored"<<endl;
            }
           else
            {
                bck.push(ford.top());
                cout<<ford.top()<<endl;
                ford.pop();
            }
         }
       else break;
     }

 }

    return 0;
  }

