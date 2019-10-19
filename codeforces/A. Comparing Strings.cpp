#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ch,gh;
    int x1[26];
    int x2[26];
    int p=0;
    for(int i=0;i<26;i++)
    {
        x1[i]=0;
        x2[i]=0;
    }
    cin>>ch>>gh;
    for(int i=0;i<ch.size();i++)
    {
        x1[ch[i]-'a']++;
    }
    for(int i=0;i<gh.size();i++)
    {
        x2[gh[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(x1[i]!=x2[i])
        {
            p=1;
            break;
        }
    }
    if(p==0 && (ch.size()==gh.size()))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
