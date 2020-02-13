#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int n,j,sum=0,k=0,p=0,x,l;
        cin>>n;
        string s;
        cin>>s;
        for(j=0;j<n;j++)
        {
             x=s[j]-48;
            sum+=x;
            if(sum%2==0 && (s[j])%2!=0)
            {
                k=j;
                p=1;
                break;

            }

        }
        if(p==1)
        {
            for(l=0;l<=k;l++)
                cout<<s[l];
            cout<<endl;
        }
        else
            cout<<"-1"<<endl;



    }
}
