#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,i,x=0,y=0,r,t;
    vector<int>::iterator it;
    vector<int>a;
    vector<int>b;
    vector<int>re;
    cin>>n>>p;
    for(i=0; i<p; i++)
    {
        cin>>r;
        a.push_back(r);
    }

    cin>>q;
    for(i=0; i<q; i++)
    {
        cin>>t;
        b.push_back(t);

    }

    for(i=0; i<p+q; i++)
    {
        if(i<p)
            re.push_back(a[i]);
        else
        {
            re.push_back(b[x]);
            x++;
        }
    }
    sort(re.begin(),re.end());
    re.erase(unique(re.begin(),re.end()),re.end());


    for(it=re.begin(); it!=re.end(); it++)
    {

        y++;
    }

    if(y==n)
        cout<<"I become the guy.";
    else
        cout<<"Oh, my keyboard!";

}
