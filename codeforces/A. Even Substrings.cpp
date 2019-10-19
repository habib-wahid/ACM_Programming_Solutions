#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,x;
    string ch;
    cin>>n;
    cin>>ch;
    for(int i=0;i<n;i++)
    {
        if(ch[i]=='2'|| ch[i]=='4'|| ch[i]=='6'|| ch[i]=='8')
        {
            sum=sum +(i+1);
        }
    }
    cout<<sum<<endl;
    return 0;

}
