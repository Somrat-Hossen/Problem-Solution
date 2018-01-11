#include<bits/stdc++.h>
#define max 4
int stak[max];
int top=-1;

using namespace std;
void push(int item)
{
    if(top==max-1)
      cout<<"Stack overflow"<<endl;
    else
    {top++;
     stak[top]=item;
      cout<<item<<" is pushed on the stack"<<endl;
    }

}

void pop()
{
    int item;
    if(top==-1)
      cout<<"Stack underflow"<<endl;
    else
    {
      item=stak[top];
      top--;
      cout<<item<<" is pop from the stack"<<endl;
    }

}

void show()
{
  if(top==-1)cout<<"Stack is empty !"<<endl;
  else
  {
    for(int i=top;i>=0;i--)
    {
     cout<<stak[i]<<" ";
    }
  }
    cout<<endl;

}

int main()
{
 int option,item;
 char repeat;
 do{
 cout<<"Enter 1 for push operation: "<<endl;
 cout<<"Enter 2 for pop operation: "<<endl;
 cout<<"Enter 3 for print element: "<<endl;
 cin>>option;
 switch(option)
 {
     case 1:cout<<"Enter item"<<endl;
       cin>>item;
       push(item);
       break;

       case 2: pop();
       break;

       case 3:show();
       break;
       default:cout<<"Wrong input:"<<endl;
 }
 cout<<"Do you want to continue y/n:"<<endl;
 cin>>repeat;
 }
 while(repeat=='y');

 return 0;
}

