#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,y=99999999999;
    cin>>n>>m;
    int arr[m];
    for(int i=0; i<m; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+m);
    for(int i=0; i<m; i++)
    {
        x=(arr[i+(n-1)]-arr[i]);
        y=min(x,y);
        if(arr[i+(n)]==arr[m])
            break;
    }

    cout<<y;
}
