#include<bits/stdc++.h>
using namespace std;
int x[100000];
int main()
{
    int n,sum,p;
    vector<int>ch;
    cin>>n;
    for(int i=1;i<=n*n;i++)
    {
        ch.push_back(i);
    }
    p=n*n;
    sum=(p*(p+1))/2;
    sum=sum/n;
    int j=0,k=p-1;
    for(int i=0;i<n;i++)
    {
        cout<<ch[j]<<" "<<ch[j+1]<<" "<<ch[j+2]<<" "<<ch[k]<<" "<<ch[k-1]<<" "<<ch[k-2];
        j=j+3;
        k=k-3;
        cout<<endl;
    }
    return 0;
}
