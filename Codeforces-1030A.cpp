#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a,x=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        if(a==1)
            x=1;
    }
    if(x==1)
        cout<<"HARD";
    else
        cout<<"EASY";
}
