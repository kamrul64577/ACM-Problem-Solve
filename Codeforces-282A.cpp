#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        string s;
        cin>>s;
        if(s=="X++")
            x++;
        else if(s=="X--")
            x--;
        else if(s=="--X")
            --x;
        else if(s=="++X")
            x=x+1;
    }
    cout<<x<<endl;
}
