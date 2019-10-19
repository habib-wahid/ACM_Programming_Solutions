#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        double a;
        int p=0;
        cin>>a;
        double n = 3;
        double angle = ((n-2)*180)/n;
        while(angle<=a)
        {
            if(angle==a)
            {
                cout<<"YES"<<endl;
                p++;
                break;
            }
            else
            {
                n++;
                angle=((n-2)*180)/n;
            }
        }
        if(p==0)
            cout<<"NO"<<endl;
    }
    return 0;
}
