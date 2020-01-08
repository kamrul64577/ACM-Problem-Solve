#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int x=s.size();
    for(int i=0; i<x; i++)
    {
        char c=toupper(s[0]);
        if(i==0)
            cout<<c;
        else
            cout<<s[i];
    }

}
