#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        int len=s.size();

        if(s[len-5]=='m' && s[len-4]=='n' && s[len-3]=='i' && s[len-2]=='d' && s[len-1]=='a')
            cout<<"KOREAN"<<endl;
        else if(s[len-4]=='d' && s[len-3]=='e' && s[len-2]=='s' && s[len-1]=='u')
            cout<<"JAPANESE"<<endl;
        else if(s[len-4]=='m' && s[len-3]=='a' && s[len-2]=='s' && s[len-1]=='u')
            cout<<"JAPANESE"<<endl;
        else if(  s[len-2]=='p' && s[len-1]=='o')
            cout<<"FILIPINO"<<endl;
    }
}
