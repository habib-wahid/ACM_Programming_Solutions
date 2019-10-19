#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,max_=0,day=0;
    vector<int>ch;
    ch.push_back(0);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        ch.push_back(x);
    }
    for(int i=1;i<=n;i++)
    {

        if(ch[i]>=max_)
            max_  = ch[i];
        if(max_ == i)
            day++;

    }
    cout<<day<<endl;
    return 0;
}
