#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0,re=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(x<arr[i])
            x=arr[i];
    }

    for(int i=0; i<n; i++)
    {
        while(arr[i]!=x)
        {
            re++;
            arr[i]+=1;
        }
    }
    cout<<re;
}
