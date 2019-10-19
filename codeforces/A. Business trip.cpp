#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,j,sum=0,p=0;
    int x[12];
    cin>>k;
    for(int i=0;i<12;i++)
    {
        cin>>x[i];
    }
    if(k==0)
        cout<<0<<endl;
    else
    {
        sort(x,x+12,greater<int>());
        for(j=0;j<12;j++)
        {
            sum=sum+x[j];
            if(sum>=k)
            {
                cout<<j+1<<endl;
                p=1;
                break;
            }
        }
        if(p==0)
            cout<<-1<<endl;
    }
    return 0;
}
