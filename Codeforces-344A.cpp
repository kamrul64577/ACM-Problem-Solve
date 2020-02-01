#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=1,y=2,cnt=0;
    cin>>n;
    char ch[n+n];
    if(n==1)
    {
        cin>>ch[x];
        cin>>ch[y];
        cout<<"1";
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            cin>>ch[x];
            cin>>ch[y];
            x+=2;
            y+=2;
        }
        for(int i=1; i<=n+n; i+=2)
        {
            if(ch[i]!=ch[i+2])
            {
                cnt++;

            }
        }
        cout<<cnt;
    }
}
