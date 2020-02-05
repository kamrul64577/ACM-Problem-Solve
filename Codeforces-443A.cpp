#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[10000];
    gets(ch);
    int x=strlen(ch);
    if(x<=2)
        cout<<"0";
    else
    {
        sort(ch,ch+x);
        int j=0,cnt=0;
        for(int i=0; i<x; i++)
        {
            if(ch[i]>='a' && ch[i]<='z')
            {
                ch[j]=ch[i];
                j++;
            }
        }
        for(int k=0; k<j-1; k++)
        {
            if(ch[k]!=ch[k+1])
                cnt++;
        }
        cout<<cnt+1;
    }
}
