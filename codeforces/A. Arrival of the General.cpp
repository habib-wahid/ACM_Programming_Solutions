#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,small,big,x,pos1,pos2;
    vector<int>ch;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        ch.push_back(x);
    }
    small=ch[0];
    big=ch[0];
    pos1=1;
    pos2=1;
    for(int i=1;i<n;i++)
    {
        if(ch[i]<=small)
        {
            small=ch[i];
            pos1=i+1;
        }
        if(ch[i]>big)
        {
            big=ch[i];
            pos2=i+1;
        }
    }

    if((ch[0]==big) && (ch[n-1]==small))
    {
        cout<<0<<endl;
    }
    else
    {
    if(pos2<pos1)
        cout<<(pos2-1)+(n-pos1);
    else
        cout<<(pos2-1)+(n-(pos1+1));
    }
    return 0;

}
