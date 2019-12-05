#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a,x,z;
    cin>>n>>m>>a;

    if(n%a==0)
        x=(n/a);
    else
        x=(n/a)+1;
    if(m%a==0)
        z=(m/a);
    else
        z=(m/a)+1;

    cout<<x*z;



    return 0;
}
