#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,sum,sum1,sum2,a,b;
    cin>>n;
    if(n%2==0)
    {
        a=n/2;
        sum1=a*(a+1);
         sum2=(a*(2*1+((a-1)*2)))/2;
         sum=sum1-sum2;
         cout<<sum<<endl;
    }
    else
    {
        a=(n-1)/2;
        sum1=a*(a+1);
        b=(n/2)+1;
        sum2=(b*((2*1)+(b-1)*2))/2;
        sum=sum1-sum2;
        cout<<sum<<endl;
    }
    return 0;
}


