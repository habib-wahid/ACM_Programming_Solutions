#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,x,zero1=0,zero2=0,one1=0,one2=0,y;
    vector<int>ch,gh;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x>>y;
        ch.push_back(x);
        gh.push_back(y);
    }
    for(int i=0;i<n;i++)
    {
        if(ch[i]==0)
            zero1++;
        if(gh[i]==0)
            zero2++;
        if(ch[i]==1)
            one1++;
        if(gh[i]==1)
            one2++;
    }

    if(zero1>one1 && zero2>one2)
        cout<<one1+one2<<endl;
    if(zero1>one1 && zero2<one2)
        cout<<one1+zero2<<endl;
    if(one1>zero1 && one2>zero2)
        cout<<zero1+zero2<<endl;
    if(one1>zero1 && one2<zero2)
        cout<<zero1+one2<<endl;
    if(zero1==one1 && zero2>one2)
        cout<<one1+one2<<endl;
    if(zero1==one1 && one2>zero2)
        cout<<one1+zero2<<endl;
    if(zero1>one1 && zero2==one2)
        cout<<one1+one2<<endl;
    if(zero1<one1 && one2==zero2)
        cout<<one2+zero1<<endl;
        if(zero1==one1 && one2==zero2)
            cout<<zero1+zero2<<endl;
        return 0;
}
