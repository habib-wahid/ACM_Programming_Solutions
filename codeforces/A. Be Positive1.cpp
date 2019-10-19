#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,zero=0,pl=0,mi=0,a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x<0)
        {
            mi++;
            a=x;
        }
        if(x==0)
        {
            zero++;
        }
        if(x>0)
        {
            pl++;
        }
    }


     if(pl>=(zero+mi))
        cout<<pl<<endl;
    else if(mi>=(zero+pl))
        cout<<a<<endl;
    else
        cout<<0<<endl;

}
