#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int x=0,y=0;
    cin>>s;
    int a=s.length(),p=1;


    for(int i=0; i<a; i++)
    {

        if((s[0]=='4' && s[1]=='7') ||(s[0]=='7' && s[1]=='4'))
            x=1;
        else if(a==1)
        {
            if(s[i]=='4' || s[i]=='7')
                x=1;
        }
    }
    stringstream convert(s);
    convert>>y;
    if(y%4==0||y%7==0)
        x=1;

        if(y%47==0 || y%74==0)
            p=0;


    if(x==1 || p==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
