#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int x=s.size(),r=0,l=0;
    for(int i=0;i<x;i++)
    {
        if(s[i]=='R')
            r++;
        if(s[i]=='L')
            l++;
    }
    cout<<l+r+1;
}
