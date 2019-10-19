#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c;
    long long int sum=0;
    cin>>a>>b>>c;
    if(a<b)
    {
        sum=sum+(2*a+1)+(c*2);
        cout<<sum<<endl;
    }
    if(a==b)
    {
        sum=sum+((2*a)+(2*c));
        cout<<sum<<endl;
    }
    if(a>b)
    {
        sum=sum+((2*b+1)+(2*c));
        cout<<sum<<endl;
    }
    return 0;
}
