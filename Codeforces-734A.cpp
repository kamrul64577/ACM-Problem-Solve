#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,an=0,d=0;
    cin>>a;
    char ch[a];
    for(int i=0; i<a; i++)
    {
        cin>>ch[i];
        if(ch[i]=='A')
            an++;
        else if(ch[i]=='D')
            d++;
    }
    if(an>d)
        cout<<"Anton";
    else if(d>an)
        cout<<"Danik";
    else
        cout<<"Friendship";

}
