#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin>>n;
    long long int len=n.size(),i,x=0;
    for(i=0; i<len; i++)
    {
        if(n[i]=='4' || n[i]=='7')
            x++;
    }

    if(x==4 || x==7)
        cout<<"YES";
    else
        cout<<"NO";
}
