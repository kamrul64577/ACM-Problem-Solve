#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,a,i,sum=0,re,result;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        sum+=a;
    }
    re=sum/100;
    result=re/n;

    cout<<fixed<<setprecision(12)<<result*100;
}
