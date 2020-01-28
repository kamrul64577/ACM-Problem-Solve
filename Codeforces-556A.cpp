#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int one=0,zero=0;
    char arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]=='1')
            one++;
        else
            zero++;
    }
    cout<<abs(one-zero);
}
