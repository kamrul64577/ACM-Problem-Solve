#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int re,q=0,a=0,i,x,len=s.size();
    for(i=0; i<len; i++)
    {
        if(s[i]=='Q')
        {
            for(int j=i+1; j<len; j++)
            {
                if(s[j]=='A')
                {
                    for(int k=j+1; k<len; k++)
                    {
                        if(s[k]=='Q')
                            q++;
                    }
                }
            }
        }
    }

    cout<<q;
}
