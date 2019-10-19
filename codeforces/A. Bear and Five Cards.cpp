#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x[101]={0};
    int t1,t2,t3,t4,t5,max_=1,p,sum=0,q=0;
    vector<int>ch;
    cin>>t1>>t2>>t3>>t4>>t5;
    ch.push_back(t1);
    ch.push_back(t2);
    ch.push_back(t3);
    ch.push_back(t4);
    ch.push_back(t5);
    x[t1]++;
    x[t2]++;
    x[t3]++;
    x[t4]++;
    x[t5]++;
    for(int i=0;i<101;i++)
    {
        if(x[i]>1)
        {
        if(x[i]*i>=max_)
        {
            max_ = x[i]*i;
            p=i;
        }
        }
    }
    for(int i=0;i<5;i++)
    {
        if(max_==1)
        {
            sum=sum+ch[i];
        }
       else if(max_ == 2 || max_==3)
       {
           if(ch[i]==p)
            continue;
           else
            sum=sum+ch[i];
       }
       else
       {
           if(ch[i]==p && q<3)
           {
               q++;
               continue;
           }
           else
            sum=sum+ch[i];
       }
    }
    cout<<sum<<endl;
    return 0;
}
