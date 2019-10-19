#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,sum=0,count_=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        sum=sum+x;
    }
    n=n+1;
    if(n==2)
    {
        if(sum%2==0)
            cout<<2<<endl;
        else
            cout<<3<<endl;
    }
    else
    {
        int a,b,c,p;
        p=sum/n;
        a=(p*n)+1;
        b=((p+1)*n)+1;
        c=((p+2)*n)+1;
        for(int i=1;i<=5;i++)
        {
            int r=sum+i;
            if(r==a || r==b || r==c)
              continue;
            else
                count_++;
        }
         cout<<count_<<endl;
    }

    return 0;
}
