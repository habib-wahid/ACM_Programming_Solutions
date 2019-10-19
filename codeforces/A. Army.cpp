#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,x,sum=0;
    vector<int>ch;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        cin>>x;
        ch.push_back(x);
    }
    cin>>a>>b;
    for(int i=a-1;i<b-1;i++)
        sum=sum+ch[i];
    cout<<sum<<endl;
    return 0;

}
