#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<char>ch;
    string kh;
    getline(cin,kh);
    for(int i=0;i<kh.size();i++)
    {
        if( kh[i]>='a' && kh[i]<='z')
            ch.insert(kh[i]);
    }
    cout<<ch.size()<<endl;

    return 0;
}
