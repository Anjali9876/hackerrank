#include <bits/stdc++.h>

using namespace std;

int main()
{int n,x,f=0;
 cin>>n;
 int a[n];
 for(int i=0;i<n;++i)
  cin>>a[i];
x=a[0];

 for(int i=0;i<n;++i)
 { if(x<a[i])
     x=a[i];}
  for(int i=0;i<n;++i)
 { if(a[i]==x)
     f++;}
 cout<<f;
 return 0;
}
