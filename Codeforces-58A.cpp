#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ans="hello";

    string s;
    cin>>s;
    int x=s.size(),a=0;
    for(int i=0; i<x; ++i)
    {
        if(s[i]==ans[a])
            a++;
    }
    if(a==5)
        cout<<"YES";
    else
        cout<<"NO";
}
