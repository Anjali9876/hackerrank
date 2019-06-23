#include <bits/stdc++.h>

using namespace std;
int main()
{int i,n,s=0,p=0;
 cin>>n;
 int a[n][n];
for(i=0;i<n;++i)
  {for(int j=0;j<n;++j)
       cin>>a[i][j];}
 for(i=0;i<n;++i)
 {
         s=s+a[i][i];
     
         p=p+a[i][n-1-i];
 }

 cout<<abs(p-s);
 return 0;
}
