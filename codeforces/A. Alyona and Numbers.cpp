#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a;
    long long int sum=0;
    cin>>n>>m;
    if(n>m)
    {
        a=n;
        n=m;
        m=a;
    }
   long long int value[5],value1[5];
    if(n>=5)
    {
    for(int i=0;i<5;i++)
    {
        if((i+1)%5==0)
            value[i]=m/5;
        else
        value[i]=((m-(5-(i+1)))/5)+1;
        //cout<<value[i]<<" ";
    }
    for(int i=0;i<5;i++)
    {
        value1[i]=((n-(i+1))/5)+1;
//        cout<<value1[i]<<" ";
    }
    for(int i=0;i<5;i++)
    {

            sum=sum+(value1[i]*value[i]);

    }
    cout<<sum<<endl;
    }
    else
    {
         for(int i=0;i<n;i++)
    {

         if(i+1+m>=5)
         {
        value[i]=((m-(5-(i+1)))/5)+1;
        sum=sum+value[i];
         }
    }
    cout<<sum<<endl;
    }
    return 0;
}
