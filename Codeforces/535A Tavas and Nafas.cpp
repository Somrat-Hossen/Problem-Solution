#include <bits/stdc++.h>
#include <stdlib.h>
#include<iomanip>

#define maxx 1e+5
#define PI            acos(-1.0)
#define pb            push_back
#define all(x)        (x).begin(), (x).end()
#define clr(ar)        memset(ar, 0, sizeof(ar))
#define loop(i,n)      for(int i=0; i<n; i++)
#define lop(i,n)      for(int i=1; i<=n; i++)
#define maxint(a,b,c) (a>b)?(a>c)?a:c :(b>c)?b:c
#define minint(a,b,c) (a<b)?(a<c)?a:c :(b<c)?b:c
#define READ          freopen("in.txt", "r", stdin);
#define WRITE          freopen("out.txt", "w", stdout);

using namespace std;

typedef long long int ll;
typedef  set<int>             si;
typedef  map<string,int>      mst;
typedef  map<int,int>	      mii;
typedef  map<char,int>        mci;
typedef  map<int,string>	   mis;
typedef  vector<long long> 	   vi;
typedef  vector<string> 	   vs;
map<int,int>mp;
map<int,int>::iterator it;
ll n,i,x,y,z,j,len,cnt(0),sum=0,a,b,c,temp,d,res=0,k,tc,mod=1000003,t,r,pos,ans=0,m;
ll arr[50],ar[1000];
int dp[1000];
ll two[1000][1000];
int dx[4]= {0,0,1,-1};
int dy[4]= {1,-1,0,0};
string str;
queue<int>q;
vector<int>vec;
char ch;

int check(int ,int)
{

}

int main()
 {
   /*  mis mp;
     mp[1]="one"; mp[2]="two";mp[3]="three";mp[4]="four";mp[5]="five";mp[6]="six";mp[7]="seven";mp[8]="eight";
     mp[9]="nine";mp[10]="ten";mp[11]="eleven";mp[12]="twelve";
     mp[13]="thirteen";mp[14]="fourteen";mp[15]="fifteen";mp[16]="sixteen";mp[17]="seventeen";mp[18]="eighteen";mp[19]="nineteen";
     mp[20]="twenty";mp[21]="twenty-one";mp[22]="twenty-two";mp[23]="twenty-three";mp[24]="twenty-four";
     mp[25]="twenty-five";mp[26]="twenty-six";mp[27]="twenty-seven";mp[28]="twenty-eight";mp[29]="twenty-nine";mp[30]="thirty";mp[31]="thirty-one";
     mp[32]="thirty-two";mp[33]="thirty-three";mp[34]="thirty-four";mp[35]="thirty-five";mp[36]="thirty-six";
     mp[37]="thirty-seven";mp[38]="thirty-eight";mp[39]="thirty-nine";mp[40]="forty";mp[41]="forty-one";
     mp[42]="forty-two";mp[43]="forty-three";mp[44]="forty-four";mp[45]="forty-five";mp[46]="forty-six";
     mp[47]="forty-seven";mp[48]="forty-eight";mp[49]="forty-nine";mp[50]="fifty";

     mp[51]="fifty-one";
     mp[52]="fifty-two";mp[53]="fifty-three";mp[54]="fifty-four";mp[55]="fifty-five";mp[56]="fifty-six";
     mp[57]="fifty-seven";mp[58]="fifty-eight";mp[59]="fifty-nine";mp[60]="sixty";mp[61]="sixty-one";
     mp[62]="sixty-two";mp[63]="sixty-three";mp[64]="sixty-four";mp[65]="sixty-five";mp[67]="sixty-seven";mp[66]="sixty-six";
     mp[68]="sixty-eight";mp[69]="sixty-nine";mp[70]="seventy";mp[71]="seventy-one";mp[72]="seventy-two";
     mp[73]="seventy-three";mp[74]="seventy-four";mp[75]="seventy-five";mp[76]="seventy-six";mp[77]="seventy-seven";
     mp[78]="seventy-eight";mp[79]="seventy-nine";mp[80]="eighty";mp[81]="eighty-one";mp[82]="eighty-two";
     mp[84]="eighty-four";mp[85]="eighty-five";mp[86]="eighty-six";mp[87]="eighty-seven";mp[88]="eighty-eight";
     mp[89]="eighty-nine";mp[90]="ninety";mp[91]="ninety-one";mp[92]="ninety-two";mp[93]="ninety-three";
     mp[94]="ninety-four";mp[95]="ninety-five";mp[96]="ninety-six";mp[97]="ninety-seven";mp[98]="ninety-eight";
      mp[99]="ninety-nine";mp[83]="eighty-three";mp[0]="zero";*/

      string st[29]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen"
     ,"sixteen","seventeen","eighteen","nineteen","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
     cin>>n;
    if(n<=20) cout<<st[n]<<endl;

    else if(n%10==0) cout<<st[18+n/10]<<endl;
    else if(n%10) cout<<st[18+n/10]<<"-"<<st[n%10]<<endl;

   return 0;

  }



