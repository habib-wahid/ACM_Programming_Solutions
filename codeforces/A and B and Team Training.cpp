#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a=n+m;
    if(m>= 2*n)
        cout<<n<<endl;
        else if(n>=2*m)
            cout<<m<<endl;
        else  if(a%3 == 0)
        cout<<a/3<<endl;
        else if(m == 0)
            cout<<0<<endl;
        else if(a<3)
            cout<<0<<endl;
        else
        {
            cout<<a/3<<endl;
        }
        return 0;
}
