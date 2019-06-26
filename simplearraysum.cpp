#include <bits/stdc++.h>

using namespace std;

int main()
{ int n,count=0;
   cin>>n;
 int ar[10000];
 for(int i=0;i<n;++i)
     cin>>ar[i];
 for(int i=0;i<n;i++)
     count=count+ar[i];
 cout<<count;
 return 0;
    
}
