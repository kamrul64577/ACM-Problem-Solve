#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len=s.size();
    int small=0,large=0;
    char c[len];
    for(int i=0; i<len; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            large++;
        }
        else  if(s[i]>='a' && s[i]<='z')
        {
            small++;
        }
    }


    if(small<large)
    {
        for(int i=0; i<len; i++)
            c[i]=toupper(s[i]);
        for(int i=0; i<len; i++)
            cout<<c[i];
    }
    else
    {
        for(int i=0; i<len; i++)
            c[i]=tolower(s[i]);
        for(int i=0; i<len; i++)
            cout<<c[i];
    }

}
