#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int arr[n],re[n];
    for(i=1; i<=n; i++)
    {
        cin>>arr[i];
        re[arr[i]]=i;
    }
    for(i=1; i<=n; i++)
    {
        cout<<re[i]<<" ";
    }

}
