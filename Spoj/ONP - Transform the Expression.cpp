#include<bits/stdc++.h>

using  namespace std;


 int operatar(char symbol)
 {
     if(symbol=='^' || symbol=='*' || symbol=='/' || symbol=='+' || symbol=='-') return 1;
     else return 0;
 }


 int precedence(char symbol)
 {
       if(symbol=='^') return 3;
       else if(symbol=='*' || symbol=='/') return 2;
       else if(symbol=='+' || symbol=='-') return 1;
       else  return 0;
 }


int main()
{
   // freopen("in.txt","r",stdin);
    int tc;
    cin>>tc; getchar();
 while(tc--)
 {
   string infix,postfix;
   stack<char>stk;

    char item,temp;

    cin>>infix;
    //cout<<infix<<endl;

    for(int i=0,len=infix.size();i<len;i++)
    {
        item=infix[i];
        if(item=='(')
         {
            stk.push(item);
         }
        else if((item>='a' && item<='z') || (item>='A' && item<='Z'))
         {
            postfix+=item;
         }

        else if((item>='0' && item<='9'))
         {
            postfix+=item;
         }

        else if(operatar(item)==1)
        {
          temp=stk.top(); stk.pop();
          while((operatar(temp)==1) && (precedence(temp)>=precedence(item))) ///if stack top
          {
              postfix+=temp;
              temp=stk.top();stk.pop();         ///   Next element to be checked until condition being false
          }
          stk.push(temp); /// when top hold such item which is not big precedency than item then it will remain stack
          stk.push(item);  /// and item also remain ,so outside the while loop two are push. compile and check
        }

       else if(item==')')
       {
           temp=stk.top();stk.pop();
           while(temp!='(')
           {
              postfix+=temp;
             temp=stk.top();
             stk.pop();
           }
       }

    }        ///end of the execution

       while(!stk.empty())  ///it brackets are not used and stack are not empty.
       {
           postfix+=stk.top();
           stk.pop();
       }

   cout<<postfix<<endl;
  }


    return 0;
}

