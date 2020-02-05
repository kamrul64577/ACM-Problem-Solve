#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        if(i==1)
        {
            if(arr[0]>arr[1] || arr[0]<arr[1])
                cnt++;
        }
        if(i>1)
        {
            sort(arr,arr+i);
            if(arr[i]>arr[i-1] || arr[i]<arr[0])
                cnt++;
        }
    }
    cout<<cnt;
}
