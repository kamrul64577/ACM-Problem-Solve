#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[101],s1[101],a;
    gets(s);
    gets(s1);
    int x= sizeof(s);
    int y= sizeof(s1);
    for(int i=0;i<x;i++)
    {
        s[i]=tolower(s[i]);
    }
    for(int i=0;i<y;i++)
    {
        s1[i]=tolower(s1[i]);
    }
   if(strcmp(s,s1)==0)
    cout<<"0";

     if(strcmp(s,s1)==-1)
    cout<<"-1";
     if(strcmp(s,s1)==1)
    cout<<"1";
}
