#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    vector<int>ch;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        ch.push_back(x);
    }
    for(int i=0;i<n;i++)
    {

           if(ch[i]==25)
            sum=sum+25;
           else
           {
               if(ch[i]-25<=sum)
               {
                   sum=sum+ch[i];
                   int p=ch[i]-25;
                   sum=sum-p;
               }
               else
               {
                   sum=-2;
                   break;
               }
           }
    }
    if(sum<0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}
