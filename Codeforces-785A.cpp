#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum=0;
    cin>>n;
    string s;
    for(i=0;i<n;i++)
    {
        cin>>s;
        if(s=="Icosahedron")
            sum+=20;
        else if(s=="Dodecahedron")
            sum+=12;
             else if(s=="Octahedron")
            sum+=8;
             else if(s=="Cube")
            sum+=6;
            else if(s=="Tetrahedron")
            sum+=4;
    }
    cout<<sum;
}
