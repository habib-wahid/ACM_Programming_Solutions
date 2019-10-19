#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum1=0,sum2=0,sum3=0;
    cin>>n;
    vector<int>ch[n];
    for(int i =0;i<n;i++)
    {

            int u,v,w;
            cin>>u>>v>>w;
            ch[i].push_back(u);
            ch[i].push_back(v);
            ch[i].push_back(w);

    }
    for(int i = 0;i<n;i++)
    {
         sum1 += ch[i][0];
         sum2  +=ch[i][1];
         sum3  +=ch[i][2];
    }


    if(sum1 ==  0 && sum2 == 0 && sum2 == 0)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
        for(int i =0;i<n;i++)
        {
            ch[i].clear();
        }
        return 0;
}
