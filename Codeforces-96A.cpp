#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int re=0;

    cin>>str;
    int x=str.size();
    for(int i=0;i<x;i++)
    {
        if(str[i]=='0' && str[i+1]=='0' &&  str[i+2]=='0' && str[i+3]=='0'  &&  str[i+4]=='0' && str[i+5]=='0' && str[i+6]=='0')
        {
           re=7;
        }
        else if(str[i]=='1' && str[i+1]=='1' &&  str[i+2]=='1' && str[i+3]=='1'  &&  str[i+4]=='1' && str[i+5]=='1' && str[i+6]=='1')
        {
            re=7;
        }

    }
    if(re==7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
