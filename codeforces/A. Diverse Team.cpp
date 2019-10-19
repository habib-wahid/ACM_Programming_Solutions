#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,p=0;
    vector<int>ch;
    vector<pair>mn;
    pair<int,int>pair1;
    cin>>n>>k;
    for(int i=0;i<ch.size();i++)
    {
        int x;
        cin>>x;
        ch.push_back(x);
    }
    pair1.first=ch[0];
    pair1.second=1;
    mn.push_back(pair1);
    for(int i=1;i<ch.size();i++)
    {
        pair1.first=ch[i];
        pair1.second=i+1;
        for(int j=0;j<mn.size();j++)
        {
            if()
        }
    }
}
