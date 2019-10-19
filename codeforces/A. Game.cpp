#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int>ch;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        ch.push_back(x);
    }
    sort(ch.begin(),ch.end());
    if(n%2==0)
        cout<<ch[(n/2)-1]<<endl;
    else
        cout<<ch[(n/2)]<<endl;
    return 0;
}
