#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,cnt=0;
    cin>>n;
    char arr[n];
    vector<char>ch;
    vector<char>::iterator it;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];

        if(arr[i]>='A' && arr[i]<='Z')
            arr[i]=arr[i]+32;

        ch.push_back(arr[i]);
    }



    sort(ch.begin(),ch.end());
    ch.erase(unique(ch.begin(),ch.end()),ch.end());
    for(it=ch.begin(); it!=ch.end(); it++)
        cnt++;

    if(cnt==26)
        cout<<"YES";
    else
        cout<<"NO";




}
