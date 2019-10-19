#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,sum1=0,sum2=0;
    vector<int>ch;
    cin>>n;
    int p=n,q=n-1;
    for(int i=0;i<n/2;i++)
    {
        cin>>x;
        ch.push_back(x);
    }
    sort(ch.begin(),ch.end());
    for(int i=(n/2-1);i>=0;i--)
    {
        sum1=sum1+abs(p-ch[i]);
        p=p-2;
    }
    for(int i=(n/2-1);i>=0;i--)
    {
        sum2=sum2+abs(q-ch[i]);
        q=q-2;
    }
    if(sum1<=sum2)
        cout<<sum1<<endl;
    else
        cout<<sum2<<endl;
    return 0;
}

