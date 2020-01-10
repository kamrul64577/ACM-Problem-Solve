#include<bits/stdc++.h>
using namespace std;
int main()
{
    int re=0;
    string s;
    cin>>s;
    int len=s.size();
    for(int i=0;i<len;i++)
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9' )
            re=1;
    }
    if(re==1)
        cout<<"YES";
    else
        cout<<"NO";
}
