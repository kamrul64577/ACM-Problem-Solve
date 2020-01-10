#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,re=0,s=0,x=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=n-1; i>=0; i--)
    {

        re+=arr[i];


        for(int j=0; j<i; j++)
        {
            s+=arr[j];
        }

        if(s>=re)
            x++;

          s=0;
    }
    cout<<x+1;
}

