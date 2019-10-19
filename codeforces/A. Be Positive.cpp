#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int>ch;
    int pl=0,mi=0,ze=0,a,b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        ch.push_back(x);
        if(x<0)
           {
                mi++;
                a=x;
           }
        if(x==0)
            ze++;
        if(x>0)
            {
                pl++;
                b=x;
            }
    }
    if(n%2 == 1)
    {

    if(ze>=(n/2+1))
        cout<<0<<endl;
    if(pl>=(n/2+1))
        cout<<b<<endl;
    if(mi>=(n/2)+1)
        cout<<a<<endl;
        if((ze==pl) && (ze+pl==n))
            cout<<b<<endl;
        if((ze==mi)&& (ze+mi==n))
            cout<<a<<endl;
        if((pl==mi) && (pl+mi==n))
            cout<<b<<endl;
    }
    else
    {
         if(ze>=(n/2))
        cout<<0<<endl;
    if(pl>=(n/2))
        cout<<b<<endl;
    if(mi>=(n/2))
        cout<<a<<endl;
        if((ze==pl) && (ze+pl==n))
            cout<<b<<endl;
        if((ze==mi)&& (ze+mi==n))
            cout<<a<<endl;
        if((pl==mi) && (pl+mi==n))
            cout<<b<<endl;
    }
    return 0;
}
