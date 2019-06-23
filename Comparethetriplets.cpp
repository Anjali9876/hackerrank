#include <bits/stdc++.h>

using namespace std;


int main()
{
    int a[10],b[10],s[2],i;
    int sum1=0;
    int sum2=0;
    for(i=0;i<3;i++)
      cin>>a[i];
    for(i=0;i<3;i++)
        cin>>b[i];
    for(i=0;i<3;++i)
    {if(a[i]>b[i])
         sum1=sum1+1;
     else if(a[i]<b[i])
         sum2=sum2+1;
     }
    s[0]=sum1;
    s[1]=sum2;
    for(i=0;i<2;i++)
        cout<<s[i]<<" "; 
    return 0;
}
