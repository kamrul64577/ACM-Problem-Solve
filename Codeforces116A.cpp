#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0,y=0,re;
    cin>>n;
    int a,b;
    for(int i=0; i<n; i++)
    {

        cin>>a>>b;
        x=x-a;
        x=x+b;


        y=max(x,y);

    }
    cout<<y;
}

