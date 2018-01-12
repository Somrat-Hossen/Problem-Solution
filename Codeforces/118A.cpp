#include<bits/stdc++.h>

using namespace std;

int main()
  {
     int i,len,j;
     char str[1000],temp;
     gets(str);
     len=strlen(str);


     for(i=0;i<len;i++)
     {
       if(str[i]!='a'&& str[i]!='e'&& str[i]!='i'&& str[i]!='o'&& str[i]!='u'&& str[i]!='y'&&
       str[i]!='A'&& str[i]!='E'&& str[i]!='I'&& str[i]!='O'&& str[i]!='U'&& str[i]!='Y')
         {
       if(str[i]>=65 && str[i]<=90)
        {
        printf(".%c",str[i]+32);
        }
        else
        {
        printf(".%c",str[i]);
         }
          }
           }
      return 0;
  }
