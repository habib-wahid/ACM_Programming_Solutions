#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n,x,max_=1,num,p=0,sum=0,a;
    vector<long long int>ch,gh;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        ch.push_back(x);
    }
    if(n==1)
        cout<<0<<endl;
    else
    {
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            a = llabs(ch[i]-ch[j]);
            if(a%2!=0)
              sum++;
        }
        gh.push_back(sum);
        sum=0;
    }
    sort(gh.begin(),gh.end());
    cout<<gh[0]<<endl;
    }
    return 0;
}
