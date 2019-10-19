#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,a,i,p=0;
    set<int>ch;
    cin>>y;
    i=y+1;
    a=i;
    while(p==0)
    {
        while(a>0)
        {
            ch.insert(a%10);
            a=a/10;
        }
        if(ch.size()==4)
        {
            cout<<i<<endl;
            break;
        }
        else
            ch.clear();
        i++;
        a=i;
    }

}
