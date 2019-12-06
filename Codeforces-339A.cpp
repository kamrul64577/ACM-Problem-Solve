#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int x=s.size();
    sort(s.begin(),s.end());
    for(int i=0; i<x; i++)
    {
        if(s[i]!='+')
        {
            cout<<s[i];
            if(i!=x-1 )
                cout<<"+";
        }
    }

}
