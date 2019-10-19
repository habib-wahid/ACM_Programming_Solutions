#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i=1,j=0,p,q;
    vector<int>ch;
    cin>>n>>m;
    ch.push_back(m);
    while(i<=ch.size())
    {
        if(ch[j]>n)
        {
            ch.push_back(ch[j]/2);
            ch.push_back(ch[j]/3);
        }
    }


}
