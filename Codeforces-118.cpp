#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;

    int x=str.size();
    for(int i=0; i<x; i++)
    {
        if  (str[i]!='A' && str[i]!='E' && str[i]!='O' && str[i]!='I' && str[i]!='Y' && str[i]!='U'
                && str[i]!='a' && str[i]!='e' && str[i]!='o' && str[i]!='i' && str[i]!='y' && str[i]!='u')
        {
            char c=tolower(str[i]);
            cout<<"."<<c;;
        }
    }
}
