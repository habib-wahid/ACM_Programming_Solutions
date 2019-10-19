#include<bits/stdc++.h>
using namespace std;

long long int a,b,c,d,e,f,n;
long long arr[10005];

int func( int n)
{
    for(int i=0;i<=n;i++)
    {
        if(i==0)
        {
            arr[i]=a;
            continue;
        }
        if(i==1)
        {
            arr[i]=b;
            continue;
        }
        if(i==2)
        {
            arr[i]=c;
            continue;
        }
        if(i==3)
        {
            arr[i]=d;
            continue;
        }
        if(i==4)
        {
            arr[i]=e;
            continue;
        }
        if(i==5)
        {
            arr[i]=f;
            continue;
        }
        arr[i]=arr[i-1]+arr[i-2]+arr[i-3]+arr[i-4]+arr[i-5]+arr[i-6];
        arr[i]=arr[i]%10000007;

    }
    return arr[n];

}

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        long long ans ;

        cin>>a>>b>>c>>d>>e>>f>>n;
        ans = func(n);
        ans = ans%10000007;
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
    return 0;
}
