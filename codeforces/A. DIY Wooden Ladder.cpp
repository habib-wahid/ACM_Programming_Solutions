#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        vector<int>ch;
        int x,a,k=2;
        cin>>x;
        for(int i=0;i<x;i++)
        {
            cin>>a;
            ch.push_back(a);
        }
        sort(ch.begin(),ch.end());
        for(int j=x-k;j>=0;j--)
        {
            if(ch[j]==0)
            {

                cout<<0<<endl;
                break;
            }
            if(ch[j]>j)
            {
                cout<<j<<endl;
                break;
            }
            k++;
        }
        ch.clear();
    }
    return 0;
}
