#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int x=s.size();
    if(s[0]=='-')
    {
        int a=s[x-1]-48;
        int b=s[x-2]-48;
        if(a>=b)
        {
            for(int i=0; i<x-1; i++)
            {

                cout<<s[i];
            }
            cout<<endl;
        }
        else
        {
            for(int i=0; i<x; i++)
            {
                if(x==3)
                {
                    if(s[2]!='0')
                        cout<<"-"<<s[i+2];
                    else
                        cout<<s[i+2];
                    break;
                }
                else if(i==x-2)
                    cout<<"";
                else
                    cout<<s[i];
            }
        }
    }
    else
        cout<<s<<endl;
}
