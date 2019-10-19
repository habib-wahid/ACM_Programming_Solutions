#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i;
    vector<int>ch,gh;
    cin>>n;
    if((2*n)%4==0)
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        if(n==1)
            cout<<1<<" "<<2<<endl;
        else
        {
        for( i=1;i<=(2*n)-2;i=i+4)
        {
            ch.push_back(i);
            ch.push_back(i+3);
            gh.push_back(i+1);
            gh.push_back(i+2);
        }


            ch.push_back(i);
            gh.push_back(i+1);

        for( i=0;i<ch.size();i++)
            cout<<ch[i]<<" ";
        for( i=0;i<gh.size();i++)
            cout<<gh[i]<<" ";
        cout<<endl;

        }
    }
    return 0;
}
