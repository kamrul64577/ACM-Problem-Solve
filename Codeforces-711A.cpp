#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0,y,j=0,k;
    cin>>n;
    char a[n],b[n],c[n],d[n],e[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i]>>b[i]>>c[i]>>d[i]>>e[i];
        if((a[i]=='O'&& b[i]=='O')  )
        {
            x=1;
            y=i;
        }
        else if((d[i]=='O' && e[i]=='O'))
        {
            j=1;
            k=i;
        }
    }

    if(x==1)
    {
        cout<<"YES"<<endl;
        for(int i=0; i<n; i++)
        {
            if(i==y)
                cout<<"+"<<"+"<<c[i]<<d[i]<<e[i]<<endl;

            else
                cout<<a[i]<<b[i]<<c[i]<<d[i]<<e[i]<<endl;
        }
    }
    else if(j==1)
    {
        cout<<"YES"<<endl;
        for(int i=0; i<n; i++)
        {
            if(i==k)
                cout<<a[i]<<b[i]<<c[i]<<"+"<<"+"<<endl;

            else
                cout<<a[i]<<b[i]<<c[i]<<d[i]<<e[i]<<endl;
        }
    }
    else
        cout<<"NO";
}
