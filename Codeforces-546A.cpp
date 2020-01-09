#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w,x=0;
    cin>>k>>n>>w;
    for(int i=1; i<=w; i++)
    {
        x+=i*k;
    }
    int re=x-n;
    if(re<1)
        cout<<"0";
    else
        cout<<re;
}
