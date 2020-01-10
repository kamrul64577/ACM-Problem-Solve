#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a,b,x=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a>>b;
        if((b-a)>=2)
            x++;
    }
    cout<<x;

}
