#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,x,p=0,sum1=0,sum2=0;
    vector<int>ch;
    cin>>n;
    int arr[n]={0};
    for(int i=0;i<n;i++)
    {
        cin>>x;
        ch.push_back(x);
    }
    cin>>a>>b;
    if(b>=a)
    p=1;
   else
   {
       int  c = a;
       a=b;
       b=c;
   }
   for(int i = a-1;i<b-1;i++)
   {
       sum1=sum1+ch[i];
       arr[i]=1;
   }
   for(int i=0;i<n;i++)
   {
       if(arr[i]==0)
       {
           sum2=sum2+ch[i];
       }
   }
   if(sum1>sum2)
    cout<<sum2<<endl;
   else
    cout<<sum1<<endl;
   return 0;
}
