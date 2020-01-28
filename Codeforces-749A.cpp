#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==0)
    {
        int d=n/2;
        cout<<d<<endl;
        for(int i=1; i<=d; i++)
        {
            cout<<"2";
            if(i!=d)
                cout<<" ";
        }
    }
    else
    {
        int x=n/2;
        cout<<x<<endl;
        for(int i=1; i<=x; i++)
        {
            if(i!=x)
                cout<<"2"<<" ";
            else
                cout<<"3";
        }
    }

}
