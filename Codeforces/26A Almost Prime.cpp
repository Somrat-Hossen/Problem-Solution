# include <bits/stdc++.h>
# include <math.h>
 using namespace std;

 set<int>st;
 int res=0,i;

void primeFactors(int n)
{
    st.clear();
    while (n%2 == 0)
    {
       // printf("%d ", 2);
       st.insert(2);
        n = n/2;
    }

    int x=n;
    for (int i = 3; i *i<=(x); i = i+2)
    {
        while(n%i==0)
        {
           // printf("%d ", i);
           st.insert(i);
            n = n/i;
       }
    }
   if (n > 2)
  //printf ("%d ", n);
  st.insert(n);
  if(st.size()==2) res++;
}



int main()
{
    int n ;
    scanf("%d",&n);
    for(i=6;i<=n;i++)
    {
     primeFactors(i);
    }
    cout<<res<<endl;

    return 0;
}
