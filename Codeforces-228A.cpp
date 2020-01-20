#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==b && b==c && c==d)
        cout<<"3";
    else if( (a==b && b==c) || (b==c && c==d) || (a==b && b==d) ||(a==c && c==d)||(a==d && b==c) || (a==c && b==d)||(a==b && c==d))
        cout<<"2";
    else if(a==b || a==c || a==d || b==c || b==d || c==d)
        cout<<"1";
    else
        cout<<"0";


}
