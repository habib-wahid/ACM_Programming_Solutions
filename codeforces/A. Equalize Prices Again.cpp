#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin>>q;
    for(int j=0;j<q;j++)
    {
        int n,x,sum=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            sum+=x;
        }
        if(sum%n == 0)
            cout<<sum/n<<endl;
        else
            cout<<(sum/n)+1<<endl;

    }
    return 0;
}
