#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull x,y,a,i,b,res,tc;
int main()
{
   // freopen("in.txt","r",stdin);
    string exp;
    cin>>tc; getchar();
 while(tc--)
{
     getchar();res=0;
      vector<int> num;
      vector<char> optr;
      vector<int>::iterator iit,it,ict;
      vector<char>::iterator cit;

      getline(cin,exp);
     // cout<<exp<<endl;
    for(i=0;i<exp.size();i++)
    {
        x=0;
        if( exp[i]=='=' ) break;
        else if( exp[i]=='*' || exp[i]=='/' || exp[i]=='+' || exp[i]=='-' )
            {
                optr.push_back(exp[i]);
            }
        else if(exp[i]==' ') continue;

        else
           {
            while(exp[i]>='0' && exp[i]<='9')
            {
                int bit=exp[i]-'0';
                x=x*10+bit;
                i++;
            }
             num.push_back(x);
           }
     }
    ull j=1;

    for(iit=num.begin(),cit=optr.begin();iit!=num.end();iit++,cit++)
    {
      if(j==1)
      {
        j++;
        it=iit; ++it;
        if(*cit=='*')  { res=(*it) * (*iit);}
        else if(*cit=='+')  { res=(*it) + (*iit);}
        else  if(*cit=='-')  { res=(*it) - (*iit);}
        else  if(*cit=='/')  { res=(*iit) / (*it);}
        iit++;
      }
      else
      {
        if(*cit=='*')  { res=res * (*iit);}
        else if(*cit=='+')  { res=res + (*iit);}
        else  if(*cit=='-')  { res=res - (*iit);}
        else  if(*cit=='/')  { res=res / (*iit);}
      }
    }
    cout<<res<<endl;
}

    return 0;
}


