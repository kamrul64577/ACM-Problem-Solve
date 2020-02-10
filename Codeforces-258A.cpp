#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len=s.size();
    int x;
    for(int i=0; i<len; i++)
    {
        if(s[i]=='0')
        {
            x=i;
            break;
        }

    }
    for(int i=0; i<len; i++)
    {
        if(i!=x)
            cout<<s[i];
    }
}
