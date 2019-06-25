#include <bits/stdc++.h>

using namespace std;

int main()
{   char str[10];
    int nn;
    gets(str);
    int h1=(int)str[0]-48;
    int h2=(int)str[1]-48;
    int hh=10*h1+1*h2;
    if(str[8]=='A')
    { if(hh==12)
      { cout<<"00";
        for(int i=2;i<8;++i)
          cout<<str[i];}
      else
      { for(int i=0;i<8;++i)
             cout<<str[i];}
    }
    else
    {  if(hh==12)
         { cout<<"12";
           for(int i=2;i<8;++i)
             cout<<str[i];}
       else
         {
           nn=hh+12;
           cout<<nn;
           for(int i=2;i<8;++i)
             cout<<str[i];}}
    return 0;
}
       
       
          
 
