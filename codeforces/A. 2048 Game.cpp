#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
      long long  int n,x,sum=0,flag=0;
        cin>>n;
        vector<int>ch;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            ch.push_back(x);
        }
        sort(ch.begin(),ch.end());
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                sum=sum+ch[j];
                if(sum==2048)
                {
                    flag = 1;
                    break;
                }
                if(sum>2048)
                    break;
            }
            sum=0;
            if(flag==1)
                break;
        }
        if(flag == 1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
