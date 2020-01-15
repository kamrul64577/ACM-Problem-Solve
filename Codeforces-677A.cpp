#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,i,sum=0;
    cin>>n>>h;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<=h)
            sum+=1;
        else
            sum+=2;
    }
    cout<<sum;
}
