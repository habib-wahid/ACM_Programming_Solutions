#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string ch;
        int x[26]={0};
        int p=0,q=0;
        vector<int>gh;
        cin>>ch;
        for(int i=0;i<ch.size();i++)
        {
            x[int(ch[i])-97]++;
            gh.push_back(int(ch[i]-97+1));
        }
        sort(gh.begin(),gh.end());
        for(int i=0;i<26;i++)
        {
            if(x[i]>1)
            {
                p=1;
                break;
            }
        }
        if(p==1)
            cout<<"NO"<<endl;
        else
        {
            for(int i=1;i<gh.size();i++)
            {
                if(gh[i-1]+1==gh[i])
                    continue;
                else
                {
                    q=1;
                    break;
                }
            }
            if(q==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
