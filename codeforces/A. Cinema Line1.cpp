#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,col=0,change=0,p=0;
    vector<int>ch;
    cin>>n;
    for(int i=0;i<n;i++)
    {
       int x;
       cin>>x;
       if(x==25)
        col=col+x;
       else
       {
           if(col>=(x-25))
           {

               col=col-(x-25);
               col=col+25;
           }
           else
            p=1;
       }
    }
    if(p==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
