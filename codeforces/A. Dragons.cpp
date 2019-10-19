#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n,p=0;
    long long int sum = 0;
    cin>>s>>n;
    vector< pair<int,int> >ch;
    for(int i=1;i<=n;i++)
    {
        int x,y;
        cin>>x>>y;
        ch.push_back(make_pair(x,y));
    }
    sort(ch.begin(),ch.end());
    for(int i=0;i<n;i++)
    {
        sum=sum+s;
        if(sum>=ch[i].first)
        {
            sum=sum-ch[i].first;
            sum=sum+ch[i].second;
        }
        else
        {
            p=1;
            break;
        }
    }
    if(p==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
