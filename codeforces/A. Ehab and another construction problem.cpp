#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,a,i;
    cin>>x;
    if(x==1)
        cout<<-1<<endl;
    else
    {
        for( i=1;i<=x;i++)
        {
            a=i*i;
            if(a>x)
                break;
        }
        cout<<i<<" "<<i<<endl;
    }
    return 0;
}
