#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,x,re,odd;
    cin>>n>>k;
    x=(k*2)-1;

    if(x<=n)
        cout<<x;

    else
    {
        if(n%2!=0)
        {
            odd=(n/2)+1;
            re=(k-odd)*2;
            cout<<re;
        }
        else
        {
            re=(k-(n/2))*2;
            cout<<re;
        }
    }
}
