#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1,s2;
    cin>>s>>s1>>s2;
    string add=s+s1;
    sort(add.begin(),add.end());
    sort(s2.begin(),s2.end());
    if(add==s2)
        cout<<"YES";
    else
        cout<<"NO";

}
