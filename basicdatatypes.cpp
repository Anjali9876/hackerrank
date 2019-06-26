#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main(){
    int a;
    long b;
    char c;
    float d;
    double e;
    cin>>a>>b>>c>>d>>e;
    cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
    cout<<fixed<<showpoint;
    cout<<setprecision(3);
    cout<<d<<"\n";
    cout<<fixed<<showpoint;
    cout<<setprecision(9);
    cout<<e;
    return 0;
}
