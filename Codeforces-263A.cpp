#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5][5],i,j,s=0,x,y;
    for( i=0; i<5; i++)

    {
        for(j=0; j<5; j++)

            cin>>a[i][j];
    }

    for( i=0; i<5; i++)

    {
        for(j=0; j<5; j++)

        {
            if(a[i][j]==1)
            {
                x=i;
                y=j;
            }
        }
    }


    if(y>=2)
        y=y-2;
    else
        y=2-y;
    if(x>=2)
        x=x-2;
    else
        x=2-x;

    cout<<x+y;
}

