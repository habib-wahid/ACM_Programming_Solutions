#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      long long  int str,inte,exp;
        cin>>str>>inte>>exp;
        if(exp==0 && (str>inte))
            cout<<1<<endl;
        else if(exp==0 && (str<=inte))
            cout<<0<<endl;
        else if((str+exp)<=inte)
            cout<<0<<endl;
        else
        {
          long long  int mot = str+exp;
         // cout<<mot<<endl;
            if(exp==1)
            {
                if((str-inte)<=1)
                    cout<<1<<endl;
                else
                    cout<<2<<endl;
            }
           else if((mot-inte)%2==0)
            {
                cout<<(mot-inte)/2<<endl;
            }
            else
                cout<<((mot-inte)/2)+1<<endl;
        }
    }
    return 0;
}
