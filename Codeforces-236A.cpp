#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int re=0,result;
    cin>>s;
    int x=s.size();
   sort(s.begin(),s.end());
    for(int i=1; i<x; i++)
    {

            if(s[i]!=s[i-1])
                re++;


    }

   if((re+1)%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";

}
/*qsxxuoynwtebujwpxwpajitiwxaxwgbcylxneqiebzfphugwkftpaikixmumkhfbjiswmvzbtiyifbx/*


/*zcinitufxoldnokacdvtmdohsfdjepyfioyvclhmujiqwvmudbfjzxjfqqxjmoiyxrfsbvseawwoyynn*/
