#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,x,y,z,k;
    cin>>a>>b>>c;
    d=a+b*c;
    e=a*(b+c);
    f=a*b*c;
    g=(a+b)*c;
    h=a+b+c;

    x=max(d,e);
    y=max(x,f);
    z=max(y,g);
    k=max(z,h);
    cout<<k;
}
