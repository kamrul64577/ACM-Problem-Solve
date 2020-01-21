#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,i;
    cin>>n;
    for(i=4; i<n-1; i++)
    {
        x=n-i;
        if((x%2==0 || x%3==0 || (x>9 &&x%5==0) || (x>7 && x%7==0) || x%9==0) &&
                (i%2==0 || i%3==0 || (i>9 && i%5==0) || (i>9 &&i%7==0) || i%9==0) &&(x+i==n))
        {
            cout<<x<<" "<<i<<endl;
            break;

        }
    }
}
