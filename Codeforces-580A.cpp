#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,x=0,y=0;
    cin>>n;
    int arr[n];

    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<n-1; i++)
    {
        if(arr[i]<=arr[i+1])
        {
            x++;
        }

        y=max(x,y);
        if(arr[i]>arr[i+1])
        {
            x=0;
        }
    }
    cout<<y+1;
}
