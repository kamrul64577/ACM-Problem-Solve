#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x=0;
    cin>>n>>m;
    char arr[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]=='C' || arr[i][j]=='M' || arr[i][j]=='Y')
                x=1;
        }
    }
    if(x==1)
        cout<<"#Color";
    else
        cout<<"#Black&White";
}
