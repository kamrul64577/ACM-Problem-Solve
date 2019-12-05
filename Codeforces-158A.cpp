#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,s=0,x;
    cin>>n>>k;
    int ar[n];
    for(int i=1; i<=n; i++)
    {
        cin>>ar[i];
    }



    for(int j=1; j<=n; j++)
    {
        if(ar[k]<=ar[j])
        {
            s++;
            if(ar[j]==0)
                s--;
        }
    }
    cout<<s<<endl;

}
