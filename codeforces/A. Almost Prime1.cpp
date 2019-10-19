#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
    int arr[n+1];
    memset(arr,0,sizeof(arr));
    for(int i=2;i<=n/2;i++)
    {
        if(prime[i] == true)

            for(int j=i;j<=n;j+=i)
            {
               arr[j]++;
               prime[j] = false;
            }

    }
    int sum=0;
    sort(arr,arr+n+1);
    for(int i=0;i<n+1;i++)
    {
        if(arr[i]==2)
            sum++;
    }
    cout<<sum<<endl;
    return 0;

}


