#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,d,re,y=0;
    cin>>n;
    int x=n;
    for(int i=x; i<=90000; i++)
    {
        ++n;
        a=n/1000;
        b=(n/100)%10;
        c=(n/10)%10;
        d=n%10;

        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {
            re=n;
            break;
        }
    }
    cout<<re;
}
