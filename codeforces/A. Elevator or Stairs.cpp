#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,t1,t2,t3,sum1,sum2;
    cin>>x>>y>>z>>t1>>t2>>t3;
    sum1=abs(x-y)*t1;
    sum2=abs(x-z)*t2+3*t3+abs(x-y)*t2;
    if(sum2<=sum1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
