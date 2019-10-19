#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long int n,k,sum=0;
        cin>>n>>k;
        while(n>0)
        {
            if(n%k==0)
            {
                sum=sum+1;
                n=n/k;
            }
            else
            {
                sum=sum+(n%k);
                n=n-(n%k);
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
