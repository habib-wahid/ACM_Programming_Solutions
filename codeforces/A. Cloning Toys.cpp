#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,a,d;
    cin>>x>>y;
    if(x==0)
    {   if(y==1)
        cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else if(y==0)
    {
        cout<<"NO"<<endl;
    }
   else if( y==1)
   {
       if(x==0)
        cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

   }

    else
    {
        a=y-1;
        if(x==a)
            cout<<"YES"<<endl;
        else if(x<a)
            cout<<"NO"<<endl;
        else
        {
                d=x-a;
                if(d%2==0)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
        }
    }
    return 0;
}
