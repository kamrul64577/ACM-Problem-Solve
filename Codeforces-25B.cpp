#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    char arr[n];
    for(i=0; i<n; i++)
        cin>>arr[i];
    if(n%2==0)
    {
        for(i=0; i<n; i++)
        {
            cout<<arr[i];
            if(i%2!=0 && i!=n-1)
                cout<<"-";
        }
    }
    else
    {
        for(i=0; i<n; i++)
        {
            cout<<arr[i];
            if(i==2 && n!=3)
                cout<<"-";
            if(i>2 && i%2==0 && i!=n-1)
                cout<<"-";
        }
    }
}
