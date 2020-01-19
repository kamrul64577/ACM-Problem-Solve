#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,ev=0,od=0,re=0;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
            ev++;
        else
            od++;
    }
    if(ev>od)
    {
        for(i=0; i<n; i++)
        {
            re++;
            if(arr[i]%2!=0)
                break;
        }
        cout<<re;
    }
    else
    {
        for(i=0; i<n; i++)
        {
            re++;
            if(arr[i]%2==0)
                break;
        }
        cout<<re;
    }

}
