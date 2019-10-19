#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string ch,gh;
    int change=0;
    vector<char> p,q;
    cin>>ch;
    cin>>gh;
    if(ch.size()==gh.size())
    {
        for(int i=0;i<ch.size();i++)
        {
            if(ch[i]==gh[i])
                continue;
                change++;
                p.push_back(ch[i]);
                q.push_back(gh[i]);
        }
        if(change==2)
        {
            sort(p.begin(),p.end());
            sort(q.begin(),q.end());
            if((p[0]==q[0]) && (p[1]==q[1]))
                cout<<"YES"<<'\n';
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<'\n';
    }
    else
        cout<<"NO"<<'\n';


        return 0;

}
