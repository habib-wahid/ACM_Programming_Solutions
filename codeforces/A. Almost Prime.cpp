#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,prime=0,p=0,sum=0;
    vector<int>ch;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                if(j==2)
                   {
                        prime++;
                        continue;
                   }

                else
                {
                    for(int k=2;k<j;k++)
                    {
                        if(j%k==0)
                         p=1;
                        break;
                    }
                    if(p==0)
                        prime++;
                }
            }
        }
        cout<<prime<<" ";
        prime=0;
        p=0;
    }
   // cout<<sum<<endl;
    return 0;
}
