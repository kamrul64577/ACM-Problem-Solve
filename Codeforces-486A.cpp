#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,re;
    cin>>n;
    if(n%2!=0)
    {
        re=(n/2)+1;
        cout<<"-"<<re;
    }
    else
    {
        re=(n/2);
        cout<<re;
    }

}
