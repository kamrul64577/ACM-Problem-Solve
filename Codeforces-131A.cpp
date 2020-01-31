#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len=s.size(),cnt=0,c=0;
    char ar[len];
    for(int i=1; i<len; i++)
    {
        if(s[0]>=97 && s[0]<=122 && s[i]>=65 && s[i]<=90)
        {
            cnt++;
        }
    }
    for(int i=0; i<len; i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            c++;
        }
    }

    if(c==len)
    {
        for(int i=0; i<len; i++)
        {
            s[i]=tolower(s[i]);
            cout<<s[i];
        }
    }
   else if(cnt+1==len)
    {
        for(int i=0; i<len; i++)
        {
            if(i==0)
            {
                s[i]=toupper(s[i]);
                cout<<s[i];
            }
            else
            {
                s[i]=tolower(s[i]);
                cout<<s[i];
            }
        }
    }

    else
        for(int i=0; i<len; i++)
        {
            cout<<s[i];
        }
}

