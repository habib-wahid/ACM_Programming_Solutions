#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    int i=1,p=1;
    vector<int>ch,kh;
    while(p<=k+2)
    {
        int a=i;
        while(a>0)
        {
            kh.push_back(a%10);
            a=a/10;
            p++;
        }
        for(int j=kh.size()-1;j>=0;j--)
        {
            ch.push_back(kh[j]);
           // cout<<kh[j]<<endl;
        }
        kh.clear();
        i++;
    }
    cout<<ch[k-1]<<endl;
    return 0;
}
