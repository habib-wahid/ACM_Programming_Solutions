#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,one=0,two=0,three=0;
    vector<int>ch;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        if(x == 1)
            one++;
        else if(x == 2)
            two++;
        else
            three++;
        ch.push_back(x);
    }
    if(one>=two && one>=three)
        cout<<two+three<<endl;
    else if(two>=three && two>=one)
        cout<<one+three<<endl;
    else if(three>=one && three>=two)
        cout<<one+two<<endl;
    else if(one>=two+three)
        cout<<two+three<<endl;
    else if(two>=one+three)
        cout<<one+three<<endl;
    else if(three>=one+two)
        cout<<one+two<<endl;
    else
        cout<<one+two<<endl;
    return 0;
}
