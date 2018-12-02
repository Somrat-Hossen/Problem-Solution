#include<bits/stdc++.h>
using namespace std;

int main()
{
  string st;
  int res=0,i,cnt=0,len;
  stack<char>stk;

 cin>>st;
 for(i=0,len=st.size();i<len;i++)
  {

   if((st[i]=='<' ) || (st[i]=='(') || (st[i]=='{') || (st[i]=='['))
   {
       stk.push(st[i]);
   }

   else
   {
     if(stk.empty())
     {
         stk.push(st[i]);
      }
    else
    {
       if((st[i]=='}') && ((stk.top()=='(') || (stk.top()=='[') || (stk.top()=='<'))){ res++; stk.pop();}
       else if((st[i]==')') && ((stk.top()=='{') || (stk.top()=='[') ||(stk.top()=='<'))) { res++; stk.pop();}
       else  if((st[i]==']') && ((stk.top()=='(') || (stk.top()=='{') ||(stk.top()=='<'))) { res++; stk.pop();}
       else  if((st[i]=='>') && ((stk.top()=='(') || (stk.top()=='{') ||(stk.top()=='['))) { res++; stk.pop();}
       else if(stk.top()!=st[i]) stk.pop();
     }
   }
 }
 if(!stk.empty()) puts("Impossible");
   else cout<<res<<endl;


 return 0;
}

