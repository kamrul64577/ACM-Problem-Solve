#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    int cnt=0;
    cin>>n>>x;

    for(int i=1; i<=n; i++)
    {
        int z=x/i;
        if(z<=n)
        {
            if(x%i==0)
                cnt++;
        }
    }

    cout<<cnt;
}
