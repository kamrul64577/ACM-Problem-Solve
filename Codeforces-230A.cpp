#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n,d,b,cnt=0;
    cin>>s>>n;
    int arr[n][2];
    vector<vector<int> > v(n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<2; j++)
        {
            cin>>b;
            v[i].push_back(b);
        }
    }
    sort(v.begin(),v.end());
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<2; j++)
        {
            if(s>v[i][0])
            {
                s+=v[i][1];
                cnt++;
            }
            break;
        }
    }
    if(cnt==n)
        cout<<"YES";
    else
        cout<<"NO";
}

/*999 2
1010 10
67 89*/
